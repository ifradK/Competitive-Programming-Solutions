#include<stdio.h>
main()
{
    int n,tmax;
    int i,j,k;
    scanf("%d %d",&n,&tmax);
    int c[n],t[n],d[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&c[i],&t[i]);
    }
    for(i=0;i<n;i++)
    {
       d[i]=c[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(c[i]>c[j])
            {
                k=c[i];
                c[i]=c[j];
                c[j]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(c[i]==d[j])
            {
                if(t[j]<=tmax)
                {
                    printf("%d",c[i]);
                    return 0;
                }
                else
                {
                    break;
                }
            }
        }
    }
    printf("TLE");
    getch();
}
