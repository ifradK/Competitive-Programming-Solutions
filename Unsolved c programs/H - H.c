#include<stdio.h>
main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n+2];
    a[0]=0;
    a[n+1]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n+1;j++)
        {
            if(j==i)
            {
             sum=sum+fabs(a[j]-a[j+2]);
             j++;
            }
            else
            {
                sum=sum+fabs(a[j]-a[j+1]);
            }
        }
        printf("%d\n",sum);
    }
    getch();
}

