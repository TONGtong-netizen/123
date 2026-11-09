#include <stdio.h>

int main() {
	int n, m, i, j, k, max;
	scanf("%d%d", &m, &n);
	int a[101][101];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int st, len, bestst, maxlen;
	for (i = 0; i < m; i++) {
		maxlen = 0;
		len = 0;
		st = -1;
		for (j = 0; j < n; j++) {
			if (a[i][j] == 0) {
				if (len > maxlen) {
					maxlen = len;
					bestst = st;
				}
				len = 0;
			}
			if (a[i][j] == 1) {
				if (len == 0) {
					st = j;
					len++;
				} else if (len != 0) {
					len++;
				}
			}
		}
		if (len > maxlen) {
			bestst = st;
			maxlen = len;
		}
		if (maxlen != 0) {
			printf("%d %d\n", bestst, bestst + maxlen - 1);
		}
		if (maxlen == 0) {
			printf("-1 -1\n");
		}
	}
	return 0;
}