#include <stdio.h>

int main() {
	int n, i, j, k;
	int a[33];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	if (n % 2 == 0) {
		for (i = n / 2; i < n; i++)
			printf("%d ", a[i]);
		for (i = 0; i < n / 2; i++)
			printf("%d ", a[i]);
	} else {
		for (i = n / 2 + 1; i < n; i++)
			printf("%d ", a[i]);
		printf("%d ", a[n / 2 ]);
		for (i = 0; i < n / 2 ; i++)
			printf("%d ", a[i]);
	}
	return 0;
}