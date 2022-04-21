#include<stdio.h>
#include<string.h>
main()
{
int n,i,b,s;
char a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",&a);

    b=strlen(a);
    s=(a[0]-'0'+a[b-1]-'0');
    printf("%d\n",s);
}
getch();
}
