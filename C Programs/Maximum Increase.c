#include<stdio.h>
main()
{
    int n;
    long long i,j,count=1,max=0;
    scanf("%d",&n);
    long long a[n+10];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    if(n==1)
    {
        printf("1");
        return 0;
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]>0)
        {
            count++;
            if(i==n-2)
            {
                if(count>max)
                {
                    max=count;
                }
            }
        }
        else
        {
            if(count>max)
            {
                max=count;
            }
            count=1;
        }
    }
    printf("%lld",max);
    getch();
}
