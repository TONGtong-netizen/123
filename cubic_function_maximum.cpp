#include <stdio.h>

int main() {
	int n, j;

	double m, i;
	scanf("%lf", &m);
	double max = 0;
	double an;
	for (i = 0; i <= 10; i += 0.0001) {
		an = -i * i * i + m * i * i;
		if (an > max)
			max = an;

	}
	printf("%.2lf", max);
	return 0;
}