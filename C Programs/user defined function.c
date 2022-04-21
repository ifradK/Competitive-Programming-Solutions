#include<stdio.h>
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int a,b,sum1,sub1,mul1,div1;
int main()
{
    scanf("%d%d",&a,&b);
    sum1=sum(a,b);
    sub1=sub(a,b);
    mul1=mul(a,b);
    div1=div(a,b);
    printf("%d\n",sum1);
    printf("%d\n",sub1);
    printf("%d\n",mul1);
    printf("%d\n",div1);

    getch();
}
int sum(int a, int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}
