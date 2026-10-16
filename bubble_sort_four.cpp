#include <stdio.h>

int main() {
	int a, b, c, d, t, m;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a > b)	{
		t = b;
		b = a;
		a = t;
	}
	if (b > c)	{
		t = c;
		c = b;
		b = t;
	}
	if (c > d)	{
		t = d;
		d = c;
		c = t;
	}
	if (a > b)	{
		t = b;
		b = a;
		a = t;
	}
	if (b > c)	{
		t = c;
		c = b;
		b = t;
	}
	if (a > b)	{
		t = b;
		b = a;
		a = t;
	}
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}