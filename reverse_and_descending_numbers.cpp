#include <stdio.h>

int main() {
	int n, i, d, t;
	int a[10];
	scanf("%d", &n);
	if (n == 0) {
		printf("0");
		return 0;
	}

	int b = 0;
	for (i = 0; n > 0; i++) {
		a[i] = n % 10;
		n /= 10;
		b = b * 10 + a[i];
	}
	int j, k;
	int c = 0;
	for (j = 0; j < i - 1; j++) {
		int max = j;
		for (k = j + 1 ; k < i; k++) {
			if (a[k] >= a[max]) {
				max = k;


			}


		}
		t = a[j];
		a[j] = a[max];
		a[max] = t;

	}
	for (j = 0; j < i; j++)
		c = c * 10 + a[j];
	d = b + c;
	printf("%d ", d);

	return 0;
}