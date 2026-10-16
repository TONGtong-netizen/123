#include <stdio.h>

int main() {
	int n, a, b, c, i, d, g, f, h;
	scanf("%d", &h);
	n = 2 * h + 1;
	for (i = 1; i <= n;  i = i + 2) {
		a = (n - i) / 2;
		b = 1;
		while (b <= a) {

			printf(" ");
			b++;
		}
		c = 1;
		while (c <= i) {
			printf("6");
			c++;
		}
		d = 1;
		while (d <= a) {
			printf(" ");
			d++;

		}
		printf("\n");
	}
	return 0;


}
