#include<stdio.h>
main()
{
int count,i,a[100];
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
}
if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
{count=4-1;}
else if((a[0]==a[1] && a[1]==a[2]) || (a[1]==a[2] && a[2]==a[3]) || (a[0]==a[1] && a[1]==a[3]) || (a[0]==a[2] && a[2]==a[3]) || (a[0]==a[1] && a[2]==a[3]) || (a[0]==a[2] && a[1]==a[3]) || (a[0]==a[3] && a[1]==a[2]))
{count=4-2;}
else if(a[0]==a[1] || a[1]==a[2] || a[2]==a[3] || a[3]==a[0] || a[0]==a[2] || a[1]==a[3])
{count=4-3;}
else
{count=4-4;}
printf("%d",count);
getch();
}
