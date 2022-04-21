#include<stdio.h>
main()
{
    long long n,k,i,j,m,l,p;
    scanf("%lld %lld", &n, &k);
    int a[n];
    if(n%2==0)
    {p=((n/2)-1);}
    else if(n%2!=0)
    {p=n/2;}

    for(i=1,j=0; (i<=n && j<=p); i=i+2,j++)
    {
        a[j]=i;
    }
    for(l=2,m=j; l<=n,m<=n; l=l+2,m++)
    {
        a[m]=l;
    }
   printf("%d",a[k-1]);
    getch();
}

