#include<stdio.h>
main()
{
    int n,count=0,total=0;
    char a[110]={0};
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=0;i<n;i++)
    {
        count=0;
        for( int j=i;j<n;j++)
        {
            if(a[j]=='x')
            {
                count++;
                i++;
            }
            else{break;}
        }
        if(count>=3)
        {
            total=total+(count-2);
        }
    }
    printf("%d",total);
    getch();
}
