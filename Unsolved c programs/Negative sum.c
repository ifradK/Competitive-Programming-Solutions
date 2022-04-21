#include<stdio.h>
main()
{
    long long c,k,i,j,n,sum=0;
    scanf("%lld",&n);
    long long a[n+10],b[100]= {0};
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0,j=0; i<n; i++)
    {
        if(a[i]>=0)
        {
            sum=sum+a[i];
            if(i==n-1)
            {
                b[j]=sum;
                j++;
            }
        }
        else if(a[i]<0)
        {
            b[j]=sum;
            j++;

            sum=0;
        }
        c=j;
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(b[i]<b[j])
            {
                k=b[i];
                b[i]=b[j];
                b[j]=k;
            }
        }
    }
for(i=0;i<=c;i++)
    {printf("%lld\n",b[i]);}


    getch();
}
