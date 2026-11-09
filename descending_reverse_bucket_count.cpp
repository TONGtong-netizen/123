#include <stdio.h>

int main() {
	int n, i, d, t, f;
	int a[10];
	int count [10] = {0};
	scanf("%d", &n);
	if (n == 0) {
		printf("0");
		return 0;
	}

	int b = 0;
	for (i = 0; n > 0; i++) {
		a[i] = n % 10;
		n /= 10;
		b = b * 10 + a[i];
	}
	int j, k;
	int c = 0;

	for (j = 0; j < i; j++) {
		count[a[j]]++;
	}
	for (d = 9; d >= 0; d--) {
		for (j = 1; j <= count[d]; j++) {
			c = c * 10 + d;
		}
	}
	f = b + c;
	printf("%d ", f);

	return 0;
}