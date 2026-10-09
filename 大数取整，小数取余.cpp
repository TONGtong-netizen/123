#include<stdio.h>
int main()
{int a,b,c,d;
scanf("%d%d",&a,&b);
if(a>b)printf("%d %d",a%10,b*b);
else printf("%d %d",b%10,a*a);
return 0;
}

