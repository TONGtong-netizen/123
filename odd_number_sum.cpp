#include <stdio.h>

int main() {
	int a = 1;
	int sum = 0;
	while (a != 0) {
		scanf("%d", &a);
		if (a % 2 == 1) {
			sum += a;
		}
	}
	printf("%d", sum);
}

