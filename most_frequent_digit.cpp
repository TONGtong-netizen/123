#include <stdio.h>

int main() {
	int i, n, j, k, max;
	int a[1000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	int b[12] = {0};
	j = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == 0)
			b[0]++;
		for (; a[i];) {
			b[a[i] % 10]++  ;
			a[i] /= 10;
		}
	}

	int maxb = 0;
	for (i = 0; i < 10; i++) {
		if (b[i] > maxb)
			maxb = b[i];
	}
	printf("%d:", maxb);
	for (i = 0; i < 10; i++) {

		if (b[i] == maxb) {
			printf(" %d", i);

		}
	}
	return 0;
}