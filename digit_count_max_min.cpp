#include <stdio.h>

int main() {
	int a, b, t, e, f, g, max, min, i, c;
	scanf("%d", &a);
	t = a;
	f = a;
	if (a == 0) {
		printf("1 0 0");
		return 0;
	}
	i = 0;
	while (t > 0) {
		t /= 10;
		i++;
	}
	e = 0;
	while (a > 0) {
		c = a % 10;
		a /= 10;
		if (c > e)
			e = c;

	}
	g = f;
	while (f > 0) {
		c = f % 10;
		f /= 10;
		if (c < g)
			g = c;

	}
	printf("%d %d %d", i, e, g);

}
