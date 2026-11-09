#include <stdio.h>

int main() {
	int a, b, i;
	scanf("%d%d", &a, &b);
	int c ;
	for (i = 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			c = i;
			break;
		}
	}
	printf("%d", c);
	return 0;
}