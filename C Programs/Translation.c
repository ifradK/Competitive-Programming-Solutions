#include<stdio.h>
#include<string.h>
main()
{
    int len,i,j,count=0;
    char s[100],t[100];
    gets(s);
    gets(t);

    len=strlen(s);

    for(i=0,j=len-1;i<len,j>=0;i++,j--)
    {
        if(s[i]==t[j])
        {
            count++;
        }
    }
    if(count==len)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    getch();
}
