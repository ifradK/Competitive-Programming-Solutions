#include<stdio.h>
int min(char a1,char b1)
{
    char c=(a1<b1?a1:b1);
    return c;
}
main()
{
    int i,n,count,sum=0;
    char a[1010]={0},b[1010]={0};
    scanf("%d",&n);
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<n;i++)
    {
         if(a[i]>=b[i])
         {
             count=min((a[i]-b[i]),(10+(b[i]-a[i])));
         }
         else
         {
            count=min((10+(a[i]-b[i])),(b[i]-a[i]));
         }
         sum=sum+count;
    }
    printf("%d",sum);
    getch();
}
