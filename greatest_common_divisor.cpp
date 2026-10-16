#include <stdio.h>

int main() {
	int a, b, i, c;
	scanf("%d%d", &a, &b);
	if (a == 0 ) {
		printf("%d", b);
		return 0;
	}
	if (b == 0 ) {
		printf("%d", a);
		return 0;
	}
	for (i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0)
			c = i;
	}
	printf("%d", c);
	return 0;
}