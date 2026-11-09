#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i, t, m;
	int num = 0;
	int p1 = 0;
	int p2 = 0;
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		if (((p2 - p1) * (p1 - m) < 0) && i >= 3)
			num++;
		t = p1;
		p1 = m;
		p2 = t;
	}
	printf("%d", num);
	return 0;
}