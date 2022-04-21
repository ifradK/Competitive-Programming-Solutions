#include<stdio.h>
main()
{
char a[100];
int j,n,i,t,bed=0,kit=0,liv=0,bedroom,c,d;
scanf("%d",&t);
for(j=0;j<t;j++)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a);
if(a[0]=='b' || a[0]=='B')
{
    bed++;
}
else if(a[0]=='k' || a[0]=='K')
{
    kit++;
}
else if(a[0]=='l' || a[0]=='L')
{
    liv++;
}

}
bedroom=bed/2;
c=(bedroom<kit? bedroom:kit);
d=(c<liv? c:liv);
printf("%d\n",d);
}
getch();
}
