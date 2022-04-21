#include<stdio.h>
#include<string.h>
main()
{
int i,n;
char a[1000];
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]>=97 && a[i]<=122)
{
    a[i]=a[i]-32;
}
}
printf("%s",&a);
getch();
}
