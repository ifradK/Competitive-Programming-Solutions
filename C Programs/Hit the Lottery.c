#include<stdio.h>
main()
{
long long n;
int q,a,b,c,d,e,a1,b1,c1,d1,e1;
scanf("%lld",&n);
a=n/100;
a1=n%100;
b=a1/20;
b1=a1%20;
c=b1/10;
c1=b1%10;
d=c1/5;
d1=c1%5;
e=d1/1;
e1=d1%1;
q=a+b+c+d+e;
printf("%d",q);
getch();
}
