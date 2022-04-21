#include<stdio.h>
main()
{
    int t,n,r,i,j,sum;
    int a[110];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=1500;
        scanf("%d %d", &n, &r);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            sum=sum+a[j];
        }
        if(sum==r)
        {
            printf("Correct\n");
        }
        else
        {
            printf("Bug\n");
        }
    }

    getch();
}
