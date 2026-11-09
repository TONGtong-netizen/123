#include <stdio.h>

int main() {
	int n, i;
	int a[55];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int maxindex;
	for (i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			maxindex = i + 1;

		}

	}
	for (i = 0; i < n; i++) {
		if (a[i] == max) {
			printf("%d %d ", max, i + 1);
		}
	}

	return 0;
}