#include<stdio.h>
main()
{
int n,i,x,y,mishka=0,chris=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d", &x, &y);
if(x>y)
{mishka++;}
else if(y>x)
    {chris++;}
}
if(mishka>chris)
{printf("Mishka");}
else if(chris>mishka)
{printf("Chris");}
else
printf("Friendship is magic!^^");
getch();

}
