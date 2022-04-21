#include<stdio.h>
main()
{
int a,b,c,d;
scanf("%d%d",&a,&b);
if(a>b)
{printf("%d\n",b);}
else if(a<b)
{printf("%d\n",a);}
else if(a==b)
{printf("%d\n",a);}
if(a>b)
{c=a-b;}
else if(a<b)
{c=b-a;}
else if(a==b)
{c=0;}
d=c/2;
printf("%d",d);
getch();
}
