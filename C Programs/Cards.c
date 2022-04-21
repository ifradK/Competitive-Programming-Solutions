#include<stdio.h>
main()
{
    int num,n,i,j,k,m;
    scanf("%d",&n);
    int a[n],b[n],c[n/2],d[n/2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    num=a[0]+a[n-1];
    for(i=0,m=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]+b[j]==num)
            {
               c[m]=i+1;
               d[m]=j+1;
               m++;
               b[i]=0;
               b[j]=0;
               break;
            }
        }
    }
    for(i=0;i<n/2;i++)
    {
        printf("%d %d\n",c[i],d[i]);
    }
    getch();
}
