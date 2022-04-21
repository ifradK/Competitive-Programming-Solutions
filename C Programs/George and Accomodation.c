#include<stdio.h>
main()
{
int i,a,x,y,c,d=0;
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d%d",&x,&y);
c=y-x;
if(c>=2)
{
d++;
}
}

printf("%d",d);
getch();

}
