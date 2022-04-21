#include<stdio.h>
#include<math.h>
main()
{
    long b,g,r,total;
    double n,k;
    scanf("%lf%lf",&n,&k);

    b=ceil((n*8)/k);
    g=ceil((n*5)/k);
    r=ceil((n*2)/k);

    total=b+g+r;
    printf("%ld",total);
    getch();
}
