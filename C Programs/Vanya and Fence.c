#include<stdio.h>
main()
{
    int i,n,h,sum=0;
    int str[1000];
    scanf("%d",&n);
    scanf("%d",&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
        if(str[i]>h)
        {
            sum=sum+2;
        }
        else if(str[i]<=h)
        {
          sum=sum+1;
        }
    }
    printf("%d",sum);
    getch();

}
