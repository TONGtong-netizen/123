#include <stdio.h>

int main() {
	int n, i, j, m;
	int a[150];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] + a[j] == m) {
				printf("%d %d", i, j);
				return 0;
			}
		}
	}
	return 0;
}