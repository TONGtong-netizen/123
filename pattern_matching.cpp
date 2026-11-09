#include <stdio.h>

int main() {
	int n, i, j, m;
	int a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int num = 0;
	for (i = 1; i < n - 1; i++) {
		if (a[i - 1] == 3 && a[i] == 5 && a[i + 1] == 7)
			num++;
	}
	printf("%d", num);
	return 0;
}