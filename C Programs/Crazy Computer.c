#include<stdio.h>
main()
{
    int n,c,i,j,count=1;
    scanf("%d %d",&n,&c);
    int t[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(t[i+1]-t[i]<=c)
        {
            count++;
        }
        else
        {
            count=1;
        }
    }
    printf("%d",count);
    getch();
}
