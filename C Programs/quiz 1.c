#include<stdio.h>
main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<2*n-1;j++)
{
if(j<n)
{
if(j<n-i-1) printf(" ");
else printf("#");
}
else
{
if(j<=i+n-1) printf("#");
}
}
printf("\n");
}
getch();
}
