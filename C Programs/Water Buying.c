#include<stdio.h>
main()
{
long long i,q,n,a,b;
long long a1,a2,b1,b2,total;
long long total1;
scanf("%lld",&q);
for(i=0;i<q;i++)
{
scanf("%lld %lld %lld", &n, &a, &b);

b1=n/2;
b2=b*b1;
a1=n%2;
a2=a*a1;
total=a2+b2;

total1=n*a;
if(total1<total)
{printf("%lld\n",total1);}
else
{
    printf("%lld\n",total);
}
}
getch();
}
