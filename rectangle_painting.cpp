#include <stdio.h>

int main() {
	int m, n, i, j, k;
	int a[100][100] = {0};
	int b[100][4] = {0};
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for (k = 0; k < n; k++) {
		for (i = b[k][1] ; i < b[k][3] ; i++) {
			for (j = b[k][0] ; j < b[k][2] ; j++) {
				a[i][j] = 1;
			}
		}
	}

	int num = 0;
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			if (a[i][j] == 1)
				num++;
		}
	}
	printf("%d", num);
	return 0;
}