#include<stdio.h>
main()
{
    int n,i,j=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("not prime");
        return 0;
    }
    for(i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
            j=1;
        }
    }
    if(j==0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    getch();
}
