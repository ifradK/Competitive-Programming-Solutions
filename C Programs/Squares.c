#include<stdio.h>
main()
{
    int a[60];
    long i,j,n,k,b;
    scanf("%ld %ld", &n, &k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<k)
    {
        printf("-1");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[j]>a[i])
                {
                    b=a[i];
                    a[i]=a[j];
                    a[j]=b;
                }
            }
        }
        printf("%d %d",a[k-1],a[k-1]);
    }
    getch();
}
