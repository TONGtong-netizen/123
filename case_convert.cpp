#include<stdio.h>
int main()
{
char a,b;
scanf("%c",&a);
if(a>=65&&a<97){

				b=a+32;
				printf("%c",b);
				}
else if(a>=97&&a<129){

				b=a-32;
				printf("%c",b);
				}
else	printf("%c",a);			

return 0;
}
