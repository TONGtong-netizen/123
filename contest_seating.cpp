#include <stdio.h>

int main() {
	int n, i, j, k, m, t, p;
	int a[101][101] = {0};
	int b[101];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &b[i]);
		b[i] *= 8;
	}

	int r = 1;
	t = -1;
	for (i = 0; i < 80; i++) {
		for (j = 0; j < n; j++) {
			if (i < b[j] && t == j) {
				r++;
				a[i][j] = r;
				r ++;


			}
			if (i < b[j] && t != j) {
				a[i][j] = r;
				t = j;
				r++;
			}

		}
	}
	for (i = 0; i < n; i++) {
		printf("#%d", i + 1);
		for (j = 0; j < b[i]; j++) {
			printf(" %d", a[j][i]);
		}

	}
	return 0;
}
