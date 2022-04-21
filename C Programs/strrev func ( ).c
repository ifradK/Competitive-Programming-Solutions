#include<stdio.h>
#include<string.h>
main()
{
    char s[110]={0},t[110]={0};
    int i,len,j;

    gets(s);
    len=strlen(s);
    for(i=0,j=len-1; i<len,j>=0; i++,j--)
    {
        t[i]=s[j];
    }
    puts(t);
    getch();
}
