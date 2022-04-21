#include<stdio.h>
main()
{
    int t,i;
    long long a,b,k,pos;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld", &a, &b, &k);
        if(k%2==0)
        {
            pos=((k/2)*a)-((k/2)*b);
            printf("%lld\n",pos);
        }
        else
        {
            pos=(((k+1)/2)*a)-((k/2)*b);
            printf("%lld\n",pos);
        }
    }
    getch();
}
