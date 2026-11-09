#include <stdio.h>

int main() {
	int n, i;
	int a[19];
	int b[19];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		b[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++) {
		printf("%d ", b[i]);
	}
	return 0;

}