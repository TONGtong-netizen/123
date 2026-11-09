#include <stdio.h>

int main() {
	int m, n, i, sum;
	scanf("%d%d", &m, &n);
	sum = 0;
	for (i = m; i <= n; i++) {
		sum += i * i;
	}
	printf("%d", sum);
	return 0;
}
