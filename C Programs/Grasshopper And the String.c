#include<stdio.h>
#include<string.h>
main()
{
    char a[110]= {0};
    gets(a);
    int len=strlen(a);
    a[len]='A';
    int i,j,count,max=0;
    for(i=0; i<=len; )
    {
        count=0;
        for(j=i; j<=len; j++)
        {
            if(a[j]=='A' || a[j]=='E' || a[j]=='I' || a[j]=='O' || a[j]=='U' || a[j]=='Y')
            {
                count=j-i+1;
                i=j+1;
                break;
            }
        }
        if(count>max)
        {
            max=count;
        }
    }
    printf("%d",max);
    getch();
}
