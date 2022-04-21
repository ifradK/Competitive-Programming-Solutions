#include<stdio.h>
main()
{
    int k,i,j;
    int a[4];
    for(i=0; i<4; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(j=0; j<4; j++)
    {
        printf("%d\n",a[j]);
    }
    getch();
}
