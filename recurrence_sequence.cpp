#include <stdio.h>

int main() {
	int n, i, j, t, h, m;
	int a[1009] = {0};
	int b[1009] = {0};
	int k = 3;
	scanf("%d%d%d", &a[1], &a[2], &n);
	for (i = 2; k < n + 1; i++) {
		m = a[i] * a[i - 1];
		if (m == 0) {
			b[1] = 0;
			h = 2;
		} else {
			for (h = 1; m > 0; h++) {
				b[h] = m % 10;
				m /= 10;

			}
		}




		for (j = 1; j < h; j++) {
			a[k] = b[h - j];
			k++;
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}