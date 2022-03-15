data {
	int <lower = 1>  N; // Number of ys
}

parameters { 
	real y[N];  // Propabilistic variables y
	real theta; // Propabilistic variable theta
}

model {
    // Add conditional porpability density for the ys
    // given theta to the joint log propability density
    // using the vectorized log propability density
	target += normal_lpdf(y | theta, 1);
    // Add marginal propability density for theta
    // to the joint log propability density
	target += normal_lpdf(theta | 0, 1);
}