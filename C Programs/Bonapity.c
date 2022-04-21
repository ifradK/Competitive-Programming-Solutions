#include<stdio.h>
#include<string.h>
main()
{
    int n,c,i,j,lengtha,lengthb;
    char a[100],b[100];
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%s %s", a, b);
        lengtha=strlen(a);
        lengthb=strlen(b);

if(lengtha==lengthb)
{
    for(i=0; i<lengtha; i++)
    {
        if(a[i]=='b' || a[i]=='p' || a[i]=='B' || a[i]=='P')
        {
            a[i]='b';
        }
        if(b[i]=='b' || b[i]=='p' || b[i]=='B' || b[i]=='P')
        {
            b[i]='b';
        }
    }
    for(i=0; i<lengtha; i++)
    {
            if(a[i]=='i' || a[i]=='e' || a[i]=='I' || a[i]=='E')
        {
            a[i]='e';
        }
            if(b[i]=='i' || b[i]=='e' || b[i]=='I' || b[i]=='E')
        {
            b[i]='e';
        }
    }
     c=strcmp(a,b);
    if(c==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
else
{
    printf("No\n");
}


    }


    getch();

}
