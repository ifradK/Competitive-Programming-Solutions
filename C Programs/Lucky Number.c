#include<stdio.h>
#include<string.h>
main()
{
char n[100];
int i,a,count=0;
scanf("%s",&n);
a=strlen(n);
for(i=0;i<a;i++)
{
if(n[i]=='4' || n[i]=='7')
    {
        count++;
    }
}
if(count==4 || count==7)
    printf("YES");
else
    printf("NO");
getch();
}
