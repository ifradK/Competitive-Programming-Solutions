#include<stdio.h>
main()
{
    int n,a[2][110]={0};
    int i,j,k,p,sum=0,max=0;
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0,p=0;k<n;k++,p++)
    {
        p=k;
        sum=0;
        for(i=0,j=0;i<2,j<n; )
        {
            if(i==0 && j==0)
            {
                sum=sum+a[i][j];
            }
            if(j!=n-p-1)
            {
                j++;
                sum=sum+a[i][j];
            }
            else if(j==n-p-1)
            {
                i++;
                p=p+5;
                sum=sum+a[i][j];
            }
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%d",max);
    getch();
}
