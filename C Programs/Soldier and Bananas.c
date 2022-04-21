#include<stdio.h>
main()
{
int k,w,i;
long long n,m=0,p;
scanf("%d%lld%d",&k,&n,&w);
for(i=1;i<=w;i++)
{
m=m+k*i;
}
if(n<m)
p=m-n;
else
    p=0;
printf("%lld",p);
getch();
}

