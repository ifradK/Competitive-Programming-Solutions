#include<stdio.h>
main()
{
    int n,a[110];
    int i,j,k,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
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
    for(i=1;i<n;i++)
    {
       count=count+a[0]-a[i];
    }
    printf("%d",count);
    getch();
}
