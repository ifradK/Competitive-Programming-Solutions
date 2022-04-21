#include<stdio.h>
main()
{
    int max=0,count=0,n,i,j;
    scanf("%d",&n);
    long a[n];
    for(i=0; i<n; i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]>=0)
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
                count=0;
        }
    }
    printf("%d",max+1);
    getch();
}


