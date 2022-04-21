#include<stdio.h>
main()
{
    int a=0,b=0,i,j,n,xsuma=0,xsumb=0;
    scanf("%d",&n);
    int x[n],y[n],t[n];
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&t[i],&x[i],&y[i]);
    }
    for(i=0; i<n; i++)
    {
        if(t[i]==1)
        {
            a++;
            xsuma=x[i]+xsuma;
        }
        else if(t[i]==2)
        {
            b++;
            xsumb=x[i]+xsumb;
        }
    }
    if(xsuma>=(a*5))
    {
        printf("LIVE\n");
    }
    else
    {
        printf("DEAD\n");
    }
    if(xsumb>=(b*5))
    {
        printf("LIVE\n");
    }
    else
    {
        printf("DEAD\n");
    }
    getch();
}
