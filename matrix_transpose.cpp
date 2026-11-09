#include <stdio.h>

int main() {
	int i, j, k;
	int a[4][4];
	int b[4][4];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	return 0;
}