#include <stdio.h>

int main() {
	int i, n, t, a, sum, pre, max, num, psum;
	scanf("%d", &n);
	for (i = 1, num = 0, psum = 0, pre = 0, sum = 0, max = 0; i <= n; i++) {
		scanf("%d", &num);
		t = num;
		while (num > 0) {
			a = num % 10;
			sum += a;
			num /= 10;
		}
		if (sum > psum) {
			max = t;
		}
		if (sum == psum) {
			max = (t > pre) ? t : pre;
		}

		psum = (psum > sum) ? psum : sum;
		pre = max;
		sum = 0;
	}
	printf("%d", max);
	return 0;
}
