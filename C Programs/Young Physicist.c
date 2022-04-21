#include<stdio.h>
main()
{
    int n,x,y,z,i,j,xsum=0,ysum=0,zsum=0;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        xsum=xsum+x;
        ysum=ysum+y;
        zsum=zsum+z;
    }
    if(xsum==0 && ysum==0 && zsum==0)
    {
        printf("YES");
    }
        else
    {
        printf("NO");
    }
    getch();
}
