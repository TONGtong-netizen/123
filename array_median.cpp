#include <stdio.h>

int main() {
	int n, d, i;
	scanf("%d", &n);
	int a[105];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int count [100009] = {0};
	for (i = 0; i < n; i++) {
		count[a[i]]++;
	}
	int m = 0;
	for (d = 1; d <= 100001; d++) {
		for (i = 1; i <= count[d]; i++) {
			a[m] = d;
			m++;
		}
	}
	if (n % 2 == 0) {
		printf("%d", ((a[n / 2] + a[n / 2 - 1])) / 2);
	} else {
		printf("%d", a[n / 2 ]);
	}
	return 0;
}