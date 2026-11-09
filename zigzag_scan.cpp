#include <stdio.h>

int main() {
	int n, i, k, j, h, t;
	scanf("%d", &n);
	int a[100][100];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (k = 0; k < 2 * n - 1; k++) {
		if (k < n) {
			if (k % 2 == 0) {
				for (j = 0; j <= k; j++)
					printf("%d ", a[k - j][j]);
			}
			if (k % 2 == 1) {
				for (i = 0; i <= k; i++)
					printf("%d ", a[i][k - i]);
			}
		}
		if (k >= n) {
			if (k % 2 == 0) {
				for (j = k - n + 1; j < n; j++)
					printf("%d ", a[k - j][j]);
			}
			if (k % 2 == 1) {
				for (i = k - n + 1; i < n; i++)
					printf("%d ", a[i][k - i]);
			}
		}

	}

	return 0;
}