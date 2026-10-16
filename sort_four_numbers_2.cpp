#include<stdio.h>
int main()
{int a,b,c,d,e,f,g,h,a1,b1,c1,d1,e1,f1,b2,h1,a3,a2;
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b){a=a;b=b;}else{a1=a;a=b;b=a1;}
if(a>c){a=a;c=c;}else{a2=a;a=c;c=a2;}
if(b>c){b=b;c=c;}else{b1=b;b=c;c=b1;}
if(a>d){a=a;d=d;}else{a3=a;a=d;d=a3;}
if(d>b){d=d;b=b;}else{d1=d;d=b;b=d1;}
if(c>d){c=c;d=d;}else{c1=c;c=d;d=c1;}
if(a>b){a=a;b=b;}else{a1=a;a=b;b=a1;}
if(a>c){a=a;c=c;}else{a2=a;a=c;c=a2;}
if(b>c){b=b;c=c;}else{b1=b;b=c;c=b1;}
if(a>d){a=a;d=d;}else{a3=a;a=d;d=a3;}
if(d>b){d=d;b=b;}else{d1=d;d=b;b=d1;}
if(c>d){c=c;d=d;}else{c1=c;c=d;d=c1;}	
printf("%d %d %d %d",a,b,c,d);	
return 0;
}

