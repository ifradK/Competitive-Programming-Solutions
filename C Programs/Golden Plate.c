#include<stdio.h>
main()
{
    int w,h,k,i,j;
    int sum=0,sum1=0,w1,h1;
    scanf("%d %d %d",&w,&h,&k);
    for(i=1;i<=k;i++)
    {
        w1=(w-4*(i-1));
        h1=(h-4*(i-1));
        sum1=(h1+h1)+(2*(w1-2));
        sum=sum+sum1;
    }
    printf("%d",sum);
    getch();
}
