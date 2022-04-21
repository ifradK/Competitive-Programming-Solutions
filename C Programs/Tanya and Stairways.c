#include<stdio.h>
main()
{
    int n,i,j,count=0;
    int a[1010]={0},b[1010]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
        if(i!=0)
        {
            if(a[i]==1)
            {
                b[j]=a[i-1];
                j++;
            }
        }
    }
    b[count-1]=a[n-1];
    printf("%d\n",count);
    for(i=0;i<count;i++)
    {
        printf("%d ",b[i]);
    }
    getch();
}
