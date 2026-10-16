#include <stdio.h>

int main() {
	int n, i, j, k, c;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}


		if (j == i) {
			c = n - i;
			for (k = 2; k <= c; k++) {
				if (c % k == 0)
					break;
			}
			if (c == k) {
				printf("%d %d", i, c);
				return 0;
			}
		}

	}
	return 0;
}
