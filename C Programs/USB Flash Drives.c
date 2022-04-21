#include<stdio.h>
main()
{
    int a[1000];
    int i,n,m,j,k,sum=0,count=0;

    scanf("%d",&n);
    scanf("%d",&m);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j]>a[i])
            {
                k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        count++;
        if(sum>=m)
            {
                break;
            }
    }
    printf("%d",count);
    getch();

}
