#include <stdio.h>

int main() {
	int y, d, i;
	scanf("%d%d", &y, &d);
	int a[13];
	a[1] = 31;
	a[3] = 31;
	a[4] = 30;
	a[5] = 31;
	a[6] = 30;
	a[7] = 31;
	a[8] = 31;
	a[9] = 30;
	a[10] = 31;
	a[11] = 30;
	a[12] = 31;
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		a[2] = 29;
	else
		a[2] = 28;
	for (i = 1; i < 13; i++)
		if (d <= a[i]) {
			printf("%d %d", i, d);
			return 0;
		} else {
			d -= a[i];
		}
}