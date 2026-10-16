#include <stdio.h>

int main() {
	int a, i, m;
	scanf("%d", &a);
	i = 0;
	while (i <= a) {
		if (a == i * i) {
			m = i;
			printf("%d", i);
		}


		i++;
	}
	if (a != m * m)
		printf("no");
	return 0;
}
