#include<stdio.h>
main()
{
  long long n,a;
  scanf("%lld",&n);

  if(n%2==0)
  {
      a=n/2;
  }
  else
  {
      a=((n+1)/2)*-1;
  }
  printf("%lld",a);
  getch();
}
