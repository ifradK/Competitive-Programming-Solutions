#include<stdio.h>
#include<string.h>
main()
{
    int i,j,len;
    char a[110]={0},b[110]={0},c[110]={0};

    gets(a);
    gets(b);
    len=strlen(a);

    for(i=0;i<len;i++)
    {
        if(a[i]==b[i])
        {
            c[i]='0';
        }
        else
        {
            c[i]='1';
        }
    }
    puts(c);
    getch();
}

