#include<stdio.h>
#include<string.h>
main()
{
    char s[110],t[110],l[110];
    int i,j,len,p,w;

    scanf("%s",s);
    //strrev(s);
    len=strlen(s);
    scanf("%s",l);

    for(i=0,j=len-1; i<len,j>=0; i++,j--)
    {
        t[i]=s[j];
    }
    for(w=0;w<len;w++)
    {
        if(t[w]==l[w])
        {
            p=1;
        }
        else
        {
            p=0;
            break;
        }
    }

    if(p==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    getch();
}
