#include<stdio.h>
main()
{
    int i,t,numerator,denominator,remainder;
    long long a,b,gcd,lcm;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
scanf("%lld %lld", &a, &b);
if(a>b)
{
    numerator=a;
    denominator=b;
}
else
    {
       numerator=b;
    denominator=a;
    }
  remainder=numerator%denominator;
while(remainder!=0)
{
    numerator=denominator;
    denominator=remainder;
    remainder=numerator%denominator;
}
gcd=denominator;
lcm=(a*b)/gcd;
printf("%lld %lld\n",gcd,lcm);
    }
  getch();
   }



















