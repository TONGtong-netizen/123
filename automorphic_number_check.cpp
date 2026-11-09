#include <stdio.h>

int main() {
	int n, i, j, t, s;
	int a[100];
	scanf("%d", &n);
	t = n;
	for (i = 1; t > 0; i++) {
		t /= 10;
	}
	s = n * n;

	int sum = 0;
	int k = 1;

	for (j = 1; j < i; j++) {
		a[j] = s % 10;
		s /= 10;

		sum = sum + a[j] * k;
		k *= 10;
	}

	if (sum == n) {
		printf("%d 1", n);
	} else {
		printf("%d 0", n);
	}
	return 0;
}