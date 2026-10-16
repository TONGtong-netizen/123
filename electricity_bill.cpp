#include <stdio.h>
int main()
{   
   double b,a;
    scanf("%lf",&a);
    		if(a<=110){b=a*0.5 ;printf("%.2f",b);return 0;
			          }
			if(a>110&&a<=210)	{b=110*0.5+(a-110)*0.55;printf("%.2f",b);
								}
			else{b=110*0.5+100*0.55+(a-210)*0.7;printf("%.2f",b);return 0;
				}
}
