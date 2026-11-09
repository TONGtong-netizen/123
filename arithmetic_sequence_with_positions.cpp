#include <stdio.h>

int main() {
	int n, i, t, ind, flag, j, y;
	int a[2000];
	int b[2000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (b[j] < b[i]) {
				t = b[i];
				b[i] = b[j];
				b[j] = t;

			}

		}
	}
	flag = 0;
	for (i = 1; i < n - 1; i++) {
		if (b[i - 1] - b[i] != b[i] - b[i + 1])


			flag ++;
	}
	int min;
	if (flag == 0) {

		for (i = 0; i < n; i++) {
			min = 999999;
			for (j = 0; j < n; j++) {

				if (a[j] < min) {
					min = a[j];
					y = j + 1;
				}

			}


			printf("%d ", y);
			a[y - 1] = 999999;
		}



	}

	if (flag != 0) {
		for (i = 0; i < n; i++) {
			for (j = i + 1; j < n; j++) {
				if (a[j] < a[i]) {
					t = a[i];
					a[i] = a[j];
					a[j] = t;
					ind = j + 1;
				}

			}
		}

		int max = a[1] - a[0];
		int min = a[1] - a[0];
		for (i = 0; i < n - 1; i++) {
			if (a[i + 1] - a[i] > max)
				max = a[i + 1] - a[i];
			if (a[i + 1] - a[i] < min)
				min = a[i + 1] - a[i];
		}
		printf("%d %d", max, min);
	}
	return 0;
}