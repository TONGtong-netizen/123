#include <stdio.h>

int main() {
	int a, i;
	double b, c, num = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		b = i;
		c = 2.0 * i - 1;
		if (i % 2 == 1) {
			num += (b / c) ;
		} else {
			num -= (b / c);
		}

	}
	printf("%.3lf", num);
	return 0;
}
