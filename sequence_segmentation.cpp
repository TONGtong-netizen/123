#include <stdio.h>

int main() {
	int n, i, j, t;
	int a[10009];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	int num = 1;
	for (i = 0; i < n - 1; i++) {
		if (a[i] != a[i + 1])
			num++;
	}
	printf("%d", num);
	return 0;
}