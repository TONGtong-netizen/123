#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i;
	int a[100];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int j, t;
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}

	}
	int sign = 0;
	for (i = 2; i < n; i++) {
		if ((a[i] - a[i - 1]) != (a[i - 1] - a[i - 2]))
			sign = 1;
	}
	if (sign == 1)
		printf("no");
	if (sign == 0)
		printf("%d", a[1] - a[0]);
	return 0;
}
