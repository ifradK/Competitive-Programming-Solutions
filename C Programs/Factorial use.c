#include <stdio.h>

int fact(long long n)
{
  long long c, factorial = 1;
  for (c = 1; c <= n; c++)
    {factorial = factorial * c;}
  return factorial;
}
int main()
{
    long long n,r,m,ans;
    scanf("%lld %lld %lld",&n,&r,&m);
    ans=(fact(n)/(fact(n-r)*fact(r)))%m;
    printf("%lld",ans);
    getch();
}

