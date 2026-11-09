#include <stdio.h>

int main() {
	int n, i, j;
	double a[12];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf", &a[i]);
	}
	double max, min;
	max = min = a[1] - a[0];
	for (i = 1; i < n; i++) {
		if (a[i] - a[i - 1] > max) {
			max = a[i] - a[i - 1];
		}
		if (a[i] - a[i - 1] < min) {
			min = a[i] - a[i - 1];
		}
	}
	printf("%.2lf %.2lf", max, min);
	return 0;
}