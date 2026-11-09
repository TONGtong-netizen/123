#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);

	int a[n];
	int b[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
	}

	for (i = 0; i < n; i++) {

		a[0] = (b[0] + b[1] + b[2]) / 3;
		if (i >= 1 && i < n - 1) {
			a[i] = (b[i - 1] + b[i] + b[i + 1]) / 3;
		}

		a[n - 1] = (b[n - 3] + b[n - 2] + b[n - 1]) / 3;

	}
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}