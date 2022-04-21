#include<stdio.h>
main()
{
    int n,k,i,j;
    scanf("%d",&n);
    int a[n][5],sum[1000]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            sum[i]=sum[i]+a[i][j];
        }
    }
    int smith=sum[0];

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(sum[i]<sum[j])
            {
                k=sum[i];
                sum[i]=sum[j];
                sum[j]=k;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(sum[i]==smith)
        {
            printf("%d",i+1);
            break;
        }
    }
    getch();
}
