#include <stdio.h>

int main() {
	int n, i, num, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		while (num > 0) {
			sum += num % 10;
			num = num / 10;
		}
	}
	printf("%d\n", sum % 10);
	return 0;
}
