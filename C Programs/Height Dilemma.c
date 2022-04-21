#include<stdio.h>
main()
{
    int n,i,j;
    long long k,h[1010];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&h[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(h[i]>h[j])
            {
                k=h[i];
                h[i]=h[j];
                h[j]=k;
            }
        }
    }
    for(j=0; j<n; j++)
    {
        printf("%lld\n",h[j]);
    }
}
