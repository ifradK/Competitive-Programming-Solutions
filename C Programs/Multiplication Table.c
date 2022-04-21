#include<stdio.h>
main()
{
long long n,x,i,a,b=0;
scanf("%lld%lld",&n,&x);
for(i=1;i<=n;i++)
{
if(x/i>n)
    continue;
else
{
    for(a=x/i;a<=n;a++)
    {
        if(a*i>x)
            break;
        else if(a*i==x)
            b++;
    }
}
}

printf("%lld",b);
getch();
}

