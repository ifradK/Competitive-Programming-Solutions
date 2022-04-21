#include<stdio.h>
main()
{
    int k,a[5]={0};
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }

    long a1=a[3]-a[1];
    long b1=a[3]-a[2];
    long c1=a[3]-a[0];

    printf("%ld %ld %ld", a1,b1,c1);
    getch();
}
