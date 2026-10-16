#include<stdio.h>
int main()
{int n,a;
scanf("%d",&n);
if(n==0){
printf("1");return 0;}
a=0;
while(n>=1){a=a+1;n=n/10;};
printf("%d",a);
return 0;
}

