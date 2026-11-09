#include <stdio.h>

int main() {
	int n, i, j, m;
	int x[200];
	int y[200];
	int xd, yd;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d%d", &x[i], &y[i]);

	}

	for (i = 0; i < n; i++) {
		xd = (x[i] - 4) * (x[i] - 4) + (y[i] - 4) * (y[i] - 4);
		yd = (x[i] + 4) * (x[i] + 4) + (y[i] + 4) * (y[i] + 4);

		if (xd > yd)
			printf("2 ");
		else
			printf("1 ");
	}
	return 0;
}