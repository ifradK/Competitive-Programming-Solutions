#include<stdio.h>
#include<dos.h>
main()
{
    char a[100];
    int i,q;
    scanf("%d",&q);
    for(i=0; i<q; i++)
    {
        scanf(" %c",&a[i]);
    }

    for(i=0; i<q; i++)
    {
        if(a[i]=='0')
        {
            printf("G\n");
            sleep(3);
        }
        else if(a[i]=='1')
        {
            printf("C\n");
            sleep(3);
        }
        else if(a[i]=='2')
        {
            printf("E\n");
            sleep(3);
        }
        else if(a[i]=='3')
        {
            printf("D\n");
            sleep(3);
        }
        else if(a[i]=='4')
        {
            printf("F\n");
            sleep(3);
        }
        else if(a[i]=='5')
        {
            printf("A\n");
            sleep(3);
        }
        else if(a[i]=='6')
        {
            printf("Em\n");
            sleep(3);
        }
        else if(a[i]=='7')
        {
            printf("Bm\n");
            sleep(3);
        }
        else if(a[i]=='8')
        {
            printf("Am\n");
            sleep(3);
        }
        else if(a[i]=='9')
        {
            printf("Dm\n");
            sleep(3);
        }


    }
    getch();

}
