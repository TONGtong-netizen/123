#include <stdio.h>

int main() {
	int n, t, b, i;
	scanf("%d", &n);
	int a, max = 0;
	scanf("%d", &a);
	for (i = 1; i <= n - 1; i++) {
		scanf("%d", &t);
		b = a - t;
		if (b < 0)
			b = -b;
		max = (max > b) ? max : b;
		a = t;
	}
	printf("%d", max);
	return 0;
}

