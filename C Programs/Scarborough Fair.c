#include<stdio.h>
main()
{
    int n,m,l,r,i,j;
    char c1,c2,a[110]= {0};
    scanf("%d %d",&n,&m);
    scanf("%s",a);
    for(i=0; i<m; i++)
    {
        scanf("%d %d %c %c",&l,&r,&c1,&c2);
        for(j=l-1; j<r; j++)
        {
            if(a[j]==c1)
            {
                a[j]=c2;
            }
        }
    }
    printf("%s",a);
    getch();
}
