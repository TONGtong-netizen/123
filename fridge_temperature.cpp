#include <stdio.h>
 int main()
 {int m,h;
 double t,T;
 scanf("%d%d",&h,&m); 
 t=m/60.0+h;
 T=4*t*t/(t+2)-20;
 printf("%.2f",T); 
  return 0;
 }
