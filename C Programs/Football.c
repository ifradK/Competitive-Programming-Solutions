#include<stdio.h>
#include<string.h>
main()
{
    int count0=0,count1=0,n,b,i,j;
    char a[100];

    scanf("%s",a);
    n=strlen(a);

    for(i=0; i<n; i++)
    {
        count1=0;
        if(a[i]=='1')
        {
            for(j=i; j<(i+7); j++)
            {
                if(a[j]=='1')
                {
                    count1++;
                    if(count1>=7)
                    {
                        printf("YES");
                        return 0;
                    }
                }
                else
                {
                    break;
                }

            }
        }
        else
        {
            for(j=i; j<(i+7); j++)
            {
                if(a[j]=='0')
                {
                    count1++;
                    if(count1>=7)
                    {
                        printf("YES");
                        return 0;
                    }
                }
                else
                {
                    break;
                }

            }
        }

    }
    printf("NO");

    getch();
}
