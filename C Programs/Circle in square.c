#include<stdio.h>
#include <math.h>
#define PI 2*acos(0.0)
main()
{
    int i,j,n;
    double a[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lf",&a[i]);
    }
    for(j=0; j<n; j++)
    {
        printf("Case %d: %.2lf\n",j+1,((2*2*a[j]*a[j])-(PI*a[j]*a[j])));
    }
    getch();
}

