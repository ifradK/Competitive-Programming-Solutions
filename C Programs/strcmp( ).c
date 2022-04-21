#include<stdio.h>
main()
{
    int i,j,count=0;
    char a[20]= {0},b[20]= {0};
    gets(a);
    gets(b);
    int la=strlen(a);
    int lb=strlen(b);
    if(la>lb)
    {
        printf("1");
        return 0;
    }
    else if(la<lb)
    {
        printf("-1");
        return 0;
    }
    else if(la=lb)
    {
        for(i=0; i<la; i++)
        {
            if(a[i]==b[i])
            {
                count++;
            }
            if(a[i]>b[i])
            {
                printf("1");
                return 0;
            }
            if(a[i]<b[i])
            {
                printf("-1");
                return 0;
            }
        }
        if(count==la)
        {
            printf("0");
            return 0;
        }
    }

    getch();

}
