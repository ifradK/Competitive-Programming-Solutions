#include<stdio.h>
main()
{
    int n,i;
    long a1,a2,b1,b2,c1,c2,d1,d2,r;
    double area,rarea,rarea1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld",&a1,&a2);
        scanf("%ld %ld",&b1,&b2);
        scanf("%ld %ld",&c1,&c2);
        scanf("%ld %ld",&d1,&d2);
        scanf("%ld",&r);

        area=(((a1*b2)+(b1*c2)+(c1*d2)+(d1*a2))-((a2*b1)+(b2*c1)+(c2*d1)+(d2*a1)))/2;
        rarea1=((2*r)+1)*((2*r)+1);
        //rarea=3.1416*(r+1)*(r+1);
        printf("Case %d: %ld\n",i+1,(long)(area/rarea1));
    }
    getch();
}
