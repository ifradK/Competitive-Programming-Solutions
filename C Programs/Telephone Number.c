#include<stdio.h>
main()
{
    int n,len,j,i,p=0;
    char num[110]= {0};
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        p=0;
        scanf("%d",&len);
        scanf("%s",num);
        for(j=0; j<len; j++)
        {
            if(num[j]=='8')
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            if(len-j>=11)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    getch();
}
