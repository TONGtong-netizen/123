#include <stdio.h>

int main() {
	int n, i, j;
	int a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int num = 0;
	for (i = 0; i < n; i++) {
		num += a[i];
	}
	int max = a[0];
	int maxin = 1;
	for (i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			maxin = i + 1;
		}
	}
	int min = a[0];
	int minin = 1;
	for (i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			minin = i + 1;
		}
	}
	printf("%d %d %d %d %d", num, max, maxin, min, minin);
	return 0;
}