#include <stdio.h>

int main() {
	int n, i, j;
	int a[2000];
	int b[2000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i < n - 1; i++) {
		b[i] = a[i - 1] - 2 * a[i] + a[i + 1];
		printf("%d ", b[i]);
	}
	return 0;

}