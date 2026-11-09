#include <stdio.h>

int main() {
	int m, n;
	int i, j, k;
	int a[256][256] = {0};
	int b[19] = {0};
	scanf("%d%d", &m, &n); //m¡–£ª

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
			b[a[i][j]]++;
		}
	}
	for (i = 0; i < 16; i++) {

		if (b[i] > 0)
			printf("%d %d\n", i, b[i]);
	}
	return 0;
}