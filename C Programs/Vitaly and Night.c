#include<stdio.h>
main()
{
    int i,j,n,m,count=0;
    int a[250][250]={0};
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*m;j++)
        {
            if(a[i][j]==1)
            {
                count++;
                if(j%2==0){j++;}
            }
        }
    }
    printf("%d",count);
    getch();
}
