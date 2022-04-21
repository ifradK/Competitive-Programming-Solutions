#include<stdio.h>
main()
{
    int m,n,i,j,k,sum=0,ans;
    int a[110]={0};
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        if(a[i]<0)
        {
         sum=sum+a[i];
        }
    }
    ans=fabs(sum);
    printf("%d",ans);
    getch();
}
