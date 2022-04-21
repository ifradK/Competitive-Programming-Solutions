#include<stdio.h>
main()
{
    int n,t,i,j;
    char k,a[100]={0};
    scanf("%d %d", &n, &t);
    scanf("%s",a);
    for(i=1;i<=t;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                k=a[j+1];
                a[j+1]=a[j];
                a[j]=k;
                j++;
            }
        }
    }
    puts(a);
    getch();
}
