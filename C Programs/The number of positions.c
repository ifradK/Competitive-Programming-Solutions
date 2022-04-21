#include<stdio.h>
main()
{
    int n,a,b,i;
    scanf("%d %d %d",&n,&a,&b);
    if(n-a-b>1)
    {
     printf("%d",b+1);
    }
    else
    {
    printf("%d",n-a);
    }
    getch();
}
