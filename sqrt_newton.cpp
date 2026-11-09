#include <stdio.h>
#include <math.h>

int main() {
	double a, p, q, t;
	scanf("%lf", &a);
	q = 1;
	p = 0;
	t = 0;
	while (!((t - q) > -0.00001 && (t - q) < 0.00001)) {
		p = 0.5 * (q + a / q);
		t = q;
		q = p;
	}

	printf("%.5lf", p);
}