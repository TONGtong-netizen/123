#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int t = n;
	int j;
	for (int i = 2; i < t; i++) {
		for ( j = 2; j <= i; j++) {
			if (i % j == 0)
				break;
		}

		if (j == i ) {
			while (n % i == 0) {
				if (n == t) {
					printf("%d", i);
				}

				if (n != t)
					printf("*%d", i);
				n = n / i;
			}
		}
	}

}
