functions {
  real[] sir(real t, real[] y, real[] theta, 
             real[] x_r, int[] x_i) {

      real S = y[1];
      real I = y[2];
      real R = y[3];
      real N = x_i[1];
      
      real beta = theta[1];
      real gamma = theta[2];
      
      real dS_dt = -beta * S;
      real dI_dt =  beta * S - gamma * I;
      real dR_dt =  gamma * I;

    //   real dS_dt = -beta * I * S / N;
    //   real dI_dt =  beta * I * S / N - gamma * I;
    //   real dR_dt =  gamma * I;
      
      return {dS_dt, dI_dt, dR_dt};
  }
}
data {
  int<lower=1> n_days;
  real y0[3];
  real t0;
  real ts[n_days];
  int N;
}
transformed data {
  real x_r[0];
  int x_i[1] = { N };
}
generated quantities {
  //priors
  real<lower=0> beta = normal_rng(2, 1); //truncated at 0
  real<lower=0> gamma = normal_rng(0.4, 0.5); //truncated at 0
  real<lower=0> phi_inv = exponential_rng(5);
  real y[n_days, 3];
  {
    real theta[2];
    theta[1] = beta;
    theta[2] = gamma;

    y = integrate_ode_rk45(sir, y0, t0, ts, theta, x_r, x_i);
  }
  //sampling distribution
  //col(matrix x, int n) - The n-th column of matrix x. Here the number of infected people
  real cases[n_days] = neg_binomial_2_rng(col(to_matrix(y), 2), 1. / phi_inv);
}