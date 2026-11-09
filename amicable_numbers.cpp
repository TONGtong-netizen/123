#include <stdio.h>

int main() {
	int m, n, i;
	int num = 0;
	int num1 = 0;
	int a = 0;
	int b = 0;
	scanf("%d%d", &m, & n);
	for (i = 1; i < m; i++) {
		if (m % i == 0) {
			num += i;
			a++;
		}

	}
	for (i = 1; i < n; i++) {
		if (n % i == 0) {
			num1 += i;
			b++;
		}

	}
	if (num == n && num1 == m)
		printf("yes %d %d", a, b);
	else
		printf("no %d %d", a, b);
	return 0;
}
