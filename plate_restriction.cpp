#include <stdio.h>
int main(){
int a,b,c,d;
 scanf("%d%d%d",&a,&b,&c);//星期,雾霾指数,车牌号 
 d=c%10;
 if(a>5) 
 {printf("%d no",d);}
 else { if(b<200){printf("%d no",d);}
 		else if(b>=200&&b<400){		if((a==1&&(d==1||d==6))||(a==2&&(d==2||d==7))||(a==3&&(d==3||d==8))||(a==4&&(d==4||d==9))||(a==5&&(d==5||d==0))){printf("%d yes",d);
		                             }else {printf("%d no",d);}
		 			     	}
		 else{         if(((a==1||a==3||a==5)&&(d==1||d==3||d==5||d==7||d==9))||((a==2||a==4)&&(d==2||d==4||d==6||d==8||d==0))){printf("%d yes",d);}
		                else   {printf("%d no",d);}                                                                                 
		     }
	  }
	return 0;	 
		 
		 
}
 
 
 

