#include <stdio.h>

int main() {
	int a, b, t;
	b = 0;
	t = 0;
	while (1) {
		scanf("%d", &a);


		if (a == 1) {
			b += 1;

			t = 0;
		}

		if (a == 2) {
			t = t + 2;
			b += t;
		}
		if (a == 0)
			break;

	}
	printf("%d", b);
	return 0;
}
