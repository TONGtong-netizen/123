#include <stdio.h>

int main() {
	int n, i, j, k, t;
	scanf("%d", &n);
	int a[15];
	for (i = 0; n > 0; i++) {
		a[i] = n % 10;
		n /= 10;
	}

	for (j = 0; j < i; j++) {
		for (k = j + 1; k < i; k++) {
			if (a[k] < a[j]) {
				t = a[j];
				a[j] = a[k];
				a[k] = t;
			}
		}
	}
	for (j = 0; j < i; j++) {
		printf("%d ", a[j]);
	}
	return 0;
}