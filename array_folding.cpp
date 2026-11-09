#include <stdio.h>

int main() {
	int n, i, j, k, m;
	int a[66];
	scanf("%d%d", &n, &m);
	int num = 1;
	for (i = 0; i < n; i++) {
		num *= 2;
	}
	for (i = 0; i < num; i++) {
		scanf("%d", &a[i]);

	}
	for (j = 0; j < m; j++) {
		for (i = 0; i < num; i++) {
			a[i] = a[i] + a[num - 1 - i];
		}
		num = num / 2;
	}
	for (i = 0; i < num; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}