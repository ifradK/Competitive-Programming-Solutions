#include<stdio.h>
#include<math.h>
main()
{
    long long ans,n,m;
    scanf("%lld %lld",&n,&m);
    ans=pow(2,n);
    printf("%lld",m%ans);
    getch();
}
