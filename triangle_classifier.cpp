#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d%d%d", &a, &b, &c);
	if (!((a + b > c) && (a + c > b) && (b + c > a))) {
		printf("不是三角形");
		return 0;
	}
	if (a * a + b * b == c * c) {
		printf("%lf",  (a * b) / 2);
		return 0;
	}
	if (c * c + b * b == a * a) {
		printf("%d", ( c * b) / 2);
		return 0;
	}
	if (a * a + c * c == b * b) {
		printf("%d", (a * c) / 2);
		return 0;
	}
	printf("其他三角形");
	return 0;
}

