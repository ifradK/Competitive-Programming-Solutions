#include<stdio.h>
int main()
{
    int j,i,t,n,sum=0;
    int a;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&a);
            if(a>0)
                sum+=a;
        }
        if(sum>=0)
            printf("Case %d: %d\n",i,sum);

    }

    getch();
}
