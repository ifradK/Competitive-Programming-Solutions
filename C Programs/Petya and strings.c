#include<stdio.h>
#include<string.h>
main()
{
    int m,n,i;
char a[100];
char b[100];
gets(a);
gets(b);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]>=97 && a[i]<=122)
{
    a[i]=a[i]-32;
}
}
m=strlen(b);
for(i=0;i<m;i++)
{
if(b[i]>=97 && b[i]<=122)
{
    b[i]=b[i]-32;
}
}
printf("%d",strcmp(a,b));
getch();
}
