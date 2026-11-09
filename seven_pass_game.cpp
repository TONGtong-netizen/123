#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a, b, c, i, t, m;
	a = b = c = 0;
	int num = 1;

	for (i = 1; num <= n; i++) {
		t = i;
		while (t) {
			m = t % 10;
			t /= 10;
			if (i % 3 == 1 && (m == 7 || i % 7 == 0)) {
				a++;
				num--;

				break;
			}
			if (i % 3 == 2 && (m == 7 || i % 7 == 0)) {
				b++;
				num--;

				break;
			}
			if (i % 3 == 0 && (m == 7 || i % 7 == 0)) {
				c++;
				num--;

				break;
			}
		}
		num++;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}
