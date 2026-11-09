#include <stdio.h>

int main() {
	int n, k, i;
	int x[100];
	int f = 0;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < n; i++) {
		if (x[i] == k) {
			printf("%d ", i);
			f = 1;
		}
	}
	if (f == 0)
		printf("-1");
	return 0;
}