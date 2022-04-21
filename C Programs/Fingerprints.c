#include<stdio.h>
main()
{
    int n,m,i,j,k;
    int a[10]={0},b[10]={0},c[10]={0};
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0,k=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
               c[k]=a[i];
               k++;
               break;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    getch();
}
