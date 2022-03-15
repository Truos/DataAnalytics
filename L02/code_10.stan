data {
    int<lower=1> N; // Number of ys, supplied by interface
}

parameters {
    real y[N]; // Propabilistic variables y
    real theta; // Propabilistic variables theta
}

model {
    // Add conditional propability density for the ys
    // given theta to the joint log propabiltpropability density
    // using equivalent sampling statement
    y ~ normal(theta, 1);

    // Add marginal propability density for theta
    // to the joint log propability density using
    // equivalent sampling statement
    theta ~ normal (0,1);
}
generated quantities {
    real mean_y = mean(y);
}