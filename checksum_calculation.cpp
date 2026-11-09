#include <stdio.h>

int main() {
	int n, i, j, m, b;
	int a[30];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int num = 0;
	i = 0;
	for (i = 0; i < n; i++) {
		while (a[i] > 0) {
			m = a[i] % 10;
			a[i] = a[i] / 10;
			num += m;
		}
	}
	b = num % 10;
	printf("%d", b);
	return 0;
}