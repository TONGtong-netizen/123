#include <stdio.h>

int main() {
	int n, i, b, t, j;
	int a[1009];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[j] > a[i]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}

	b = a[1] - a[0];
	if (b < 0)
		b = -b;
	for (j = 0; j < n - 1; j++) {
		if (((a[j] - a[j + 1]) < b) && ((a[j] - a[j + 1]) > -b)) {
			b = a[j] - a[j + 1];
			if (b < 0)
				b = -b;
		}

	}
	printf("%d", b);
	return 0;
}