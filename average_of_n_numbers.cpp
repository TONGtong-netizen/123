#include <stdio.h>

int main() {
	int e, i, n, a;
	double f;
	scanf("%d", &n);
	i = 0;
	e = 0;
	while (i < n) {
		scanf("%d", &a);
		e += a;
		i++;
	}
	f = e / (n * 1.0);
	printf("%.2lf", f);
	return 0;
}
