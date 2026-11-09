#include <stdio.h>

int main() {
	int n, m, i, j, t, k;
	scanf("%d%d%d%d", &m, &n, &t, &k);
	int a[22][22] = {0};
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int b[50] = {0};
	for (i = 0; i < m ; i++) {
		for (j = 0; j < n ; j++) {
			if ((a[i][j] == k) && (i != 0) && (j != 0)) {
				b[a[i + 1][j]]++;
				b[a[i - 1][j]]++;
				b[a[i][j + 1]]++;
				b[a[i][j - 1]]++;
			}
			if ((a[i][j] == k) && (i == 0) && (j != 0) ) {
				b[a[i + 1][j]]++;
				b[a[i][j + 1]]++;
				b[a[i][j - 1]]++;
			}
			if ((a[i][j] == k) && (i != 0) && (j == 0)) {
				b[a[i + 1][j]]++;
				b[a[i - 1][j]]++;
				b[a[i][j + 1]]++;
			}
			if ((a[i][j] == k) && (i == 0) && (j == 0)) {
				b[a[i + 1][j]]++;
				b[a[i][j + 1]]++;

			}
		}
	}
	b[k] = 0;
	int count = 0;
	for (i = 1; i < 50; i++) {
		if (b[i] > 0)
			count++;
	}
	printf("%d", count);
	return 0;
}