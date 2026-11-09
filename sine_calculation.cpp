#include <stdio.h>

int main() {
	int n, i, m, j, sign;
	double a[60], x;
	scanf("%d%lf", &n, &x);
	double xp = 1;
	int ni = 1;
	double an;
	double sum = 0;
	for (i = 0; i < n; i++) {
		m = 2 * i + 1;
		xp = 1;
		ni = 1;
		for (j = 1; j <= m; j++) {

			xp *= x;
			ni *= j;

		}
		if (i % 2 == 1)
			sign = -1;
		else
			sign = 1;
		an = sign * xp / ni;
		sum += an;

	}
	printf("%.4lf", sum);
	return 0;
}