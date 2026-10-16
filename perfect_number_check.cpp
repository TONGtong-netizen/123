#include <stdio.h>

int main() {
	int a, b, i;
	scanf("%d", &a);
	for (i = 1, b = 0; i < a; i++) {
		if (a % i == 0)
			b += i;
	}
	if (b == a)
		printf("yes");
	else
		printf("no");
	return 0;
}