#include<stdio.h>
#include<string.h>
main()
{
    int n,i,length;
char a[100];
scanf("%d",&n);
scanf("%s",a);
length=strlen(a);
for(i=0;i<length;i++)
{
    a[i]=a[i]+n;
}
printf("%s",a);
getch();
}
