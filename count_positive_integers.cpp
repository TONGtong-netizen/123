#include <stdio.h>

int main() {
	int n, i, j, m;
	int a[100];
	int b[100999] = {0};
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		b[a[i]]++;
	}
	for (i = 0; i < 100009; i++) {
		if (b[i] > 0) {
			printf("%d:%d\n", i, b[i]);
		}
	}
	return 0;
}