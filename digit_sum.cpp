#include <stdio.h>

int main() {
	int i, a, e, f;
	scanf("%d", &a);
	f = 0;

	while (a > 0) {
		e = a % 10;
		f += e;
		a /= 10;
	}
	printf("%d", f);
	return 0;
}