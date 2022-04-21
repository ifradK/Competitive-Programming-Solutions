#include<stdio.h>
main()
{
    int n,count=0;
    char a[110]= {0};
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if((a[j]=='B' && a[j+1]=='W') || (a[j]=='B' && a[j+1]==' '))
            {
                count++;
                i++;
                break;
            }
        }
    }
    printf("%d",count);
}
