#include<stdio.h>
main()
{
    int i,n,b=0,a,k,d=0,count=0;
    scanf("%d %d", &n, &k);
    a=240-k;
    for(i=1; i<=n; i++)
    {
        b=b+5*i;
    }

    if(b<=a)
    {
        printf("%d",n);
    }
    else if(b>a)
    {
        for(i=1; i<n; i++)
        {
            if(d<a)
            {
                d=d+5*i;
                if(d<=a)
                {
                    count++;
                }
            }

        }
        printf("%d",count);
    }
    getch();
}
