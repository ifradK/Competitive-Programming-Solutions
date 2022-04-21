#include<stdio.h>
#include<string.h>
main()
{
    int i,j,r,len,len1;
    char s[110]={0},t[100]={0},m[110]={0},k;
    gets(s);
    len=strlen(s);
    for(i=0,j=0;i<len;i=i+2,j++)
    {
        t[j]=s[i];
    }

    len1=strlen(t);
    for(i=0; i<len1; i++)
    {
        for(j=i+1; j<len1; j++)
        {
            if(t[i]>t[j])
            {
                k=t[i];
                t[i]=t[j];
                t[j]=k;
            }
        }
    }
    for(i=0,j=0,r=1;i<len,r<len+1;i=i+2,j++,r=r+2)
    {
        m[r]='+';
        m[i]=t[j];

    }
    for(i=0;i<len;i++)
    {
        printf("%c",m[i]);
    }

    getch();
}
