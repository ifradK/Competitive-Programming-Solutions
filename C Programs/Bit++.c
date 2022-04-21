#include<stdio.h>
main()
{
int n,i,b=0;
char a[100];

scanf("%d",&n);

for(i=1;i<=n;i++)
{
scanf("%s", &a);
if(a[1]=='+')
{
    b++;
}
else if(a[1]=='-')
{
    b--;
}
}
printf("%d",b);
getch();
}
