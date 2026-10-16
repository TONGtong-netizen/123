#include <math.h>
#include <stdio.h>

int main() {
	double a, b, c, d, e, f;
	scanf("%lf%lf%lf", &a, &b, &c);
	d = sqrt(b * b - 4 * a * c);
	if ((b * b - 4 * a * c) < 0) {
		printf("No real root");
		return 0;
	}
	if (d == 0) {
		e = (-b + d) / (2 * a);
		printf("%.2lf", e);
		return 0;
	}
	if (d > 0) {
		e = (-b + d) / (2 * a);
		f = (-b - d) / (2 * a);
		printf("%.2lf %.2lf", e, f);
		return 0;
	}
}
