#include <stdio.h>

int main() {
	int n, i, j, s;
	int a[100];
	scanf("%d", &n);
	int sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	int  ave = sum / n;
	int sn = 0;
	for (i = 0; i < n; i++) {
		s = (a[i] - ave) * (a[i] - ave);
		sn += s;
	}
	sn /= n;
	printf("%d", sn);
	return 0;
}