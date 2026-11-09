#include <stdio.h>

int main() {
	int i, j, k, m, n;
	int cou, st, len, maxlen, maxst;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	len = 0;
	maxlen = 0;
	maxst = -1;
	for (i = 0; i < n - 1; i++) {
		if (a[i] + 1 == a[i + 1]) {
			if (len == 0) {
				st = i;
				len++;
			} else {
				len++;
			}
		} else {
			if (len > maxlen) {
				maxst = st;
				maxlen = len;

			}
			len = 0;
		}

	}
	if (len > maxlen) {
		maxst = st;
		maxlen = len;
	}
	if (maxlen == 0) {
		printf("0 -1 -1");
		return 0;
	}
	printf("%d %d %d", maxlen + 1, maxst, maxst + maxlen );
	return 0;
}

