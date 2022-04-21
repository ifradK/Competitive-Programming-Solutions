#include<stdio.h>
main()
{
long long n,x,i,a,b=0;
scanf("%lld%lld",&n,&x);
for(i=1;i<=n;i++)
{
a=x/i;
if(a<=x && x%i==0)
{
    b++;
}
}

printf("%lld",b);
getch();
}
