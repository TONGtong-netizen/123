#include <stdio.h>

int main() {
	int	array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int a[10];
	int p;
	scanf("%d", &p);
	int i;

	for (i = p + 1; i <= 9; i++) {

		printf("%d ", array[i]);
	}
	for (i = 0; i <= p; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}