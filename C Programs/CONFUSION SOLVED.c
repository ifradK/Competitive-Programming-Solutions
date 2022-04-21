#include<stdio.h>
#include<string.h>
main()
{
int a,c,i, y=0;
char n[1000];
scanf("%s",&n);
a=strlen(n);
for(i=0;i<a;i++)
{
    if(n[i]=='4' || n[i]=='7')
    {
        y++;
    }

}
if(y==a)
    printf("Yes");
else
    printf("No");
return 0;
}
