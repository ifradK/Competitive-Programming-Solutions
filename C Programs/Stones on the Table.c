#include<stdio.h>
main()
{
    char a[100];
    int n,i,count=0;

    scanf("%d",&n);
    scanf("%s",a);

    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
    getch();
}
