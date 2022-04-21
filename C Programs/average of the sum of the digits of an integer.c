#include<stdio.h>
main()
{
    int n,sum=0,totaldigit=0,average,num,w;
    scanf("%d",&n);
    w=n;

    while(n!=0)
    {
        n=n/10;
        totaldigit++;
    }
    while(w>0)
    {
        num=w%10;
        sum=sum+num;
        w=w/10;

    }
    printf("total digit is %d",totaldigit);
        printf("sum is %d",sum);
    average=sum/totaldigit;
    printf("Average is %d",average);
    getch();
}
