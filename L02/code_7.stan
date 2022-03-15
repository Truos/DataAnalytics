data {
    int<lower=1> N; // Number of ys
}

parameters {
    real y[N];  // Propabilistic variables y
    real theta; // Porpabilistic variable theta
}

model {
    // Conditional propabiliti density for the ys
    // given theta
    y ~ normal(theta, 1);
    // Prior propability density for theta
    theta ~ normal(0,1);
}