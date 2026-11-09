#include <stdio.h>

int main() {
	int n, i, j, t;
	int bm, cm;
	bm = cm = 0;
	scanf("%d", &n);
	int a[n];
	int b[n];
	int c[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);

	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[j] > a[i]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;

			}
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			b[bm] = a[i];
			bm++;
		}
		if (a[i] % 2 != 0) {
			c[cm] = a[i];
			cm++;
		}
	}
	for (i = 0; i < bm; i++)
		printf("%d ", b[i]);
	for (i = 0; i < cm; i++)
		printf("%d ", c[i]);
	return 0;

}
