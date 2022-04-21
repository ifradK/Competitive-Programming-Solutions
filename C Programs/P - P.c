#include<stdio.h>
main()
{
    int a[3];
    int i,j,k,max;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    max=(a[0]*10)+a[1]+a[2];
    printf("%d",max);
    getch();
}
