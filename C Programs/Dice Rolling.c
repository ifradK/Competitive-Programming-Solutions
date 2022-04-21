#include<stdio.h>
main()
{
    int n,i,q,w;
    int a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        q=a[i]/7;
        if(a[i]%7==0)
        {
         printf("%d\n",q);
        }
        else
        {
         printf("%d\n",q+1);
        }

    }
    getch();
}
