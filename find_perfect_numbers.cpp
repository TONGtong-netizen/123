#include <stdio.h>

int main() {
	int a, b, i, d;
	scanf("%d", &d);
	a = 1;
	while (1) {

		for (i = 1,  b = 0; i < a; i++) {
			if (a % i == 0)
				b += i;

		}
		if (b == a)
			printf("%d\n", a);

		a++;
		b = 0;
	}

	return 0;
}