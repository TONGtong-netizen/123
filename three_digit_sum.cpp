#include<stdio.h>
	int main()
	{int a,b,c,d,e;
 	scanf("%d",&a);
 	b=a%10;
 	c=(a%100-b)/10;
 	d=(a-b-10.0*c)/100;
 	e=b+c+d;
	 printf("%d",e);
	 return 0;
}
