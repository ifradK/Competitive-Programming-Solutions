#include<stdio.h>
main()
{
    int t,i,j;
    int a[1000],b[1000],p[1000];
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {

     scanf("%d %d", &a[i], &b[i]);
    }
     for(j=a[i];j<=b[i];j++)
     {
        p[j]=a[i]*2;
        if(p[j]<=b[i])
        {
            printf("%d %d\n",a[i],p[j]);

        }

     }


    getch();
}
