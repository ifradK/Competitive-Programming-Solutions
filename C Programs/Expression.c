#include<stdio.h>
main()
{
    int a,b,c;
    int z,x,s,v,f,n;
    scanf("%d%d%d",&a,&b,&c);
    z=a+(b*c);
    x=(a*b)+c;
    s=a*b*c;
    v=a+b+c;
    f=(a+b)*c;
    n=a*(b+c);

    if(z>=x && z>=s && z>=v && z>=f && z>=n)
        printf("%d",z);
    else if(x>=z && x>=s && x>=v && x>=f && x>=n)
        printf("%d",x);
            else if(s>=x && s>=z && s>=v && s>=f && s>=n)
        printf("%d",s);
            else if(v>=x && v>=z && v>=s && v>=f && v>=n)
        printf("%d",v);
            else if(f>=x && f>=s && f>=v && f>=z && f>=n)
        printf("%d",f);
            else if(n>=x && n>=s && n>=v && n>=f && n>=z)
        printf("%d",n);

        getch();
}
