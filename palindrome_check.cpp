#include <stdio.h>

int main() {
	int n,  c, i, t, num;
	long long m;
	c = 0;
	m = 0;
	n = 0;

	num = 0;
	scanf("%d", &n);
	t = n;
	int a[10000];
	if (n == 0) {
		printf("0");
		return 0;
	}
	for (i = 0; n > 0; num++, i++) {
		a[i] = n % 10;
		n /= 10;
	}
	for (i = 0; i < num; i++) {
		m += a[i];
		m *= 10;
	}
	m /= 10;
	if (m == t) {
		for (i = 0; i < num; i++) {
			c += a[i];
		}
		printf("%d", c);
	} else
		printf("no");
	return 0;
}

