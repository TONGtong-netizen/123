#include<stdio.h>
int main()
{int a,b;
scanf("%d%d",&a,&b);
switch(b)
	{case(1):
	 case(3):
	 case(5):
	 case(7):
	 case(8):
	 case(10):
	 case(12):printf("31");break;
	 case(4):
	 case(6): 
	 case(9):
	case(11):printf("30");break;
	case(2):if(a%400==0||(a%4==0&&a%100!=0))printf("29");
	        else printf("28");break;
	}
return 0;
}

