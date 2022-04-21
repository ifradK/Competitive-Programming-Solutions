#include<stdio.h>
main()
{
    int t,c;
    long a,b,p,i,j;
    scanf("%d",&t);

    for(j=0; j<t; j++)
    {

     scanf("%ld %ld", &a, &b);
     for(i=a;i<=b;i++)
     {
        p=i*2;
        if(p<=b)
        {
            printf("%ld %ld\n",i,p);
            break;
        }

     }

    }
    getch();
}
