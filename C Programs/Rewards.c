#include<stdio.h>
main()
{
    float a1,a2,a3,b1,b3,b2;
    int n;
    scanf("%f %f %f",&a1,&a2,&a3);
    scanf("%f %f %f",&b1,&b2,&b3);
    scanf("%d",&n);

    int asum=ceil((a1+a2+a3)/5);
    int bsum=ceil((b1+b2+b3)/10);
    int total=asum+bsum;

    if(total<=n){printf("YES");}
    else{printf("NO");}

    getch();
}
