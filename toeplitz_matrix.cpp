#include <stdio.h>

int main() {
	int i, j, k, n, p, q;
	int a[12][12];
	int b[25] = {0};
	scanf("%d", &n);
	for (i = 0; i < 2 * n; i++) {
		scanf("%d", &b[i]);
	}
	for (i = 0; i < n; i++) {
		a[0][i] = b[i];
	}

	for (i = 0; i < n; i++) {
		a[i][0] = b[i + n];
	}
	for (i = 1; i < n; i++) {
		for (j = 1; j < n; j++) {

			for (p = i, q = j; ((p != 0) && (q != 0) ); ) {
				p--;
				q--;
				a[i][j] = a[p][q];
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}