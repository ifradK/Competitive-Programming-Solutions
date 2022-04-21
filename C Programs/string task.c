#include<stdio.h>
#include<string.h>
main()
{
    char str[100];
    int i,a;
    scanf("%s",&str);
    a=strlen(str);
    for(i=0; i<a; i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='Y')
        {
            if(str[i]>64 && str[i]<91)
            {
                printf(".%c",str[i]+32);

            }
            else
            {
                printf(".%c",str[i]);
            }
        }
    }

    getch();
}
