#include<stdio.h>
main()
{
int i,n;
long long a,b,c;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%lld %lld %lld", &a, &b, &c);
if((a*a+b*b)==c*c)
printf("Case %d: yes\n",i);
else if((c*c+b*b)==a*a)
printf("Case %d: yes\n",i);
else if((c*c+a*a)==b*b)
printf("Case %d: yes\n",i);
else
printf("Case %d: no\n",i);
}
getch();
}
