#include<stdio.h>
int main()
{int a,b,c,d,A1,B1,C1,A2,B2,C2,D2,A,B;
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b){A=a;B=b;}else{A=b;B=a;};
if(c>A){A1=c;B1=A;C1=B;} else if(c<A&&c>B){A1=A;B1=c;C1=B;} else {A1=A;B1=B;C1=c;};
if(d>A1){A2=d;B2=A1;C2=B1;D2=C1;} else if(d<A1&&d>B1){A2=A1;B2=d;C2=B1;D2=C1;}
 else if(d<B1&&d>C1) {A2=A1;B2=B1;C2=d;D2=C1;} else {A2=A1;B2=B1;C2=C1;D2=d;}
printf("%d %d %d %d",D2,C2,B2,A2);
return 0;
}

