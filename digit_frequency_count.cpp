#include <stdio.h>

int main() {
	int  a, b, n, t;
	int j, i, k, m;
	int d[6];
	scanf("%d%d", &a, & b);
	if (b > a) {
		t = a;
		a = b;
		b = t;
	}
	j = m = 0;
	k = 0;
	for (i = b; i <= a; i++) {
		if (i % 3 == 0)
			j++;
		if (i % 4 == 0) {
			k++;
		}
		if (i % 5 == 0 && i % 2 == 1)
			m++;
	}
	printf("%d %d %d\n ", j, k, m);

	d[0] = j % k;
	d[1] = k % j;
	d[2] = j % m;
	d[3] = m % j;
	d[4] = k % m;
	d[5] = m % k;
	for (i = 0; i < 6; i++) {
		for (j = i + 1; j < 6; j++) {
			if (d[j] > d[i]) {
				t = d[i];
				d[i] = d[j];
				d[j] = t;
			}
		}
	}
	printf("%d", d[0]);
	return 0;

}
