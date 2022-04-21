#include<stdio.h>
main()
{
int n,a,z,z1,x,x1,c,c1,v,v1,b,b1,m,m1,q,q1,w,w1,e,e1,r,r1;
printf("Enter the number");
scanf("%d",&a);
printf("Enter base");
scanf("%d",&n);

z=a/n;
z1=a%n;
x=z/n;
x1=z%n;
c=x/n;
c1=x%n;
v=c/n;
v1=c%n;
b=v/n;
b1=v%n;
m=b/n;
m1=b%n;
q=m/n;
q1=m%n;
w=q/n;
w1=q%n;
e=w/n;
e1=w%n;
r=e/n;
r1=e%n;

printf("%d%d%d%d%d%d%d%d%d%d",r1,e1,w1,q1,m1,b1,v1,c1,x1,z1);

getch();

}
