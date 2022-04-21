#include<stdio.h>
main()
{
int n,i,a,b,c,p=0;
scanf("%d", &n);
for(i=0;i<n;i++)
{
scanf("%d %d %d",&a ,&b, &c);
if((a+b+c)>=2)
{p++;}
}
printf("%d",p);
getch();
}
