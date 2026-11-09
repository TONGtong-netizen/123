#include <stdio.h>

int main() {
	int n, k, i;
	int a[100];
	scanf("%d%d", &n, &k);
	int sign = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] == k) {
			printf("%d ", i);
			sign = 1;
		}

	}
	if (sign == 0)
		printf("-1");
}