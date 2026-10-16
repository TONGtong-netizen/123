#include <stdio.h>
int main()
{int a;
scanf("%d",&a);
if(a>100||a<0) {
printf("Invalid score!");	return 0;}
switch(a/10)
	{case 9:
	case 10:printf("A");break;
	 case 8:printf("B");break;
	 case 7:printf("C");break;
	 case 6:printf("D");break;
	 case 5:
	 case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("E");break;
	 default:printf("Invalid score!");break;
	 
	}
	return 0;
}

