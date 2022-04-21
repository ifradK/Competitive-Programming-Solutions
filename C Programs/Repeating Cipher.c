#include<stdio.h>
main()
{
    int n,i,j,k;
    char a[60]={0},b[60]={0};
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0,j=0,k=1;i<n;j++,k++)
    {
        b[j]=a[i];
        i=i+k;
    }
    puts(b);
    getch();
}
