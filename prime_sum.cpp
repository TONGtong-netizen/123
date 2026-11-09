#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);
	int num = 0;
	if (n > 100000) {
		printf("0");
		return 0;
	} else {
		for (i = 2; i <= n; i++) {
			for (j = 2; j <= i; j++) {
				if (i % j == 0)
					break;

			}
			if (j == i ) {
				num += i;
			}

		}

	}
	printf("%d", num);
	return 0;
}
