#include<stdio.h>
main()
{
int n,k,i,b,c;
int a[100];

scanf("%d%d",&n,&k);

for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(b=1;b<=n;b++)
{
    if(a[b]>0)
    {
    if(a[b]>=a[k])
    {
        c=c+1;
    }
    }
}
printf("%d",c);

getch();
}
