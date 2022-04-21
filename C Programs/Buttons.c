#include<stdio.h>
main()
{
    int sum=0,n,i,j;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum=sum+((n-i)*i);
    }
    printf("%d",sum+n);
    getch();
}
