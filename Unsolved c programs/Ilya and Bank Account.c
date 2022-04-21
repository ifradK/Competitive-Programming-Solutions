#include<stdio.h>
char a[1000000000]= {0};
main()
{
    long long n,i=0,length=0,k,max=0,m;
    scanf("%lld",&n);
    m=n;
    if(n>=0)
    {
        printf("%d",m);
        return 0;
    }
    while(n!=0)
    {
        a[i]=n%10;
        n=n/10;
        length++;
        i++;
    }
    char b[length];
    if(n<0)
    {
        for(i=0,k=length-1; i<length,k>=0; i++,k--)
        {
            b[i]=a[k];
        }
        /* if(b[length-1]>=b[length-2])
         {
             b[length-1]='\0';
         }
         else
         {
             b[length-2]=b[length-1];
         }
         printf("%s",b);*/
    }
    for(i=0; i<length; i++)
    {
        printf("%d",b[i]);
    }
}
