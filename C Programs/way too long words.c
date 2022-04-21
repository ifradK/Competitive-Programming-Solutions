#include<stdio.h>
#include<string.h>
main()
{
int a,n,i;
char word[100];

scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",&word);
a=strlen(word);
if(a>10)
{
    printf("%c%d%c\n",word[0],a-2,word[a-1]);
}
else
{
    printf("%s\n",word);
}
}
getch();
}
