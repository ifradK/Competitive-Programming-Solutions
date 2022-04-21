#include<stdio.h>
#include<string.h>
main()
{
    int i,q,p=0;
    char s[110];
    gets(s);
    q=strlen(s);
    for(i=0;i<q;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            printf("YES");
            p++;
            break;
        }
    }
    if(p==0)
    {
        printf("NO");
    }
    getch();
}
