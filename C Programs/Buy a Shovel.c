#include<stdio.h>
main()
{
    int k,r,i,j,a,b,b1,q=0,w=0;
    scanf("%d %d", &k, &r);

    for(i=1;i<=20;i++)
    {
        a=k*i;
        q++;
        if(a%10==0)
        {
            break;
        }
    }
    for(j=1;j<=20;j++)
    {
        b1=k*j;
        b=b1-r;
        w++;
        if(b%10==0)
        {
            break;
        }
    }
    if(q<=w)
    {
        printf("%d",q);
    }
    else if(w<q)
    {
        printf("%d",w);
    }
    getch();
}
