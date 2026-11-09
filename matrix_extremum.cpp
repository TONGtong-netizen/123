#include <stdio.h>

int main() {
	int i, j, k, m, n;
	int max, min;
	int maxi, maxj, mini, minj;

	scanf("%d%d", &m, &n);
	int a[50][52];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	min = max = a[1][1];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
				maxi = i;
				maxj = j;
			}
			if (a[i][j] < min) {
				min = a[i][j];
				mini = i;
				minj = j;
			}
		}
	}
	printf("max %d %d %d\n", max, maxi + 1, maxj + 1);
	printf("min %d %d %d\n", min, mini + 1, minj + 1);
	int flag = 0;
	int cou;
	cou = 0;
	printf("Local Max\n");
	for (i = 1; i < m - 1; i++) {

		for (j = 1; j < n - 1; j++) {
			if ((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i][j - 1])
			        && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i - 1][j])) {

				printf("%d %d %d\n", a[i][j], i + 1, j + 1);
				flag = 1;
			}
		}
	}
	if (flag == 0)
		printf("None %d %d", m, n);
	return 0;
}