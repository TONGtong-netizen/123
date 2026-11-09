#include <stdio.h>

int main() {
	int n, i, j, k;
	int	num;
	scanf("%d", &n);
	int x, y;
	if (n % 2 == 0)
		int	num = n / 2;

	else
		num = n / 2 + 1;
	int top = n - 1;
	int bot = 0;
	int lef = 0;
	int rig = n - 1;
	int a[n][n];
	int cou = 1;
	for (i = 0; i < num; i++) {
		for (x = lef; x <= rig; x++) {
			a[x][top] = cou;
			cou++;

		}
		top--;
		for (y = top; y >= bot; y--) {
			a[rig][y] = cou;
			cou++;

		}
		rig--;
		for (x = rig; x >= lef; x--) {
			a[x][bot] = cou;
			cou++;
		}
		bot++;
		for (y = bot; y <= top; y++) {
			a[lef][y] = cou;
			cou++;

		}
		lef++;
	}
	for (y = n - 1; y >= 0; y--) {
		for (x = 0; x < n; x++) {
			printf("%-4d", a[x][y]);
		}
		printf("\n");
	}
	return 0;
}