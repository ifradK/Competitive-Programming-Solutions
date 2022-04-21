#include<stdio.h>
main()
{
    long long n,k,a;
    scanf("%lld %lld", &n, &k);

    if(k<=(n+1)/2)
    {
        printf("%lld",(k*2)-1);
    }
    else
    {
        a=(k-((n+1)/2))*2;
        printf("%lld",a);
    }
    getch();
}
