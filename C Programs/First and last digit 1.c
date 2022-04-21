#include<stdio.h>
#include<string.h>
main()
{
int n,i,b;
char a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",&a);
}
for(i=0;i<n;i++)
{
    b=strlen(a[i]);
    printf("%d\n",a[0]-'0'+a[b-1]-'0');
}
return 0;
}
