#include<stdio.h>
main()
{
    int a[3],i,j,k;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    if(a[0]+a[1]>a[2])
    {
        printf("0");
    }
    else if(a[0]+a[1]<=a[2])
    {
        int count=a[2]-(a[0]+a[1])+1;
        printf("%d",count);
    }
    getch();
}
