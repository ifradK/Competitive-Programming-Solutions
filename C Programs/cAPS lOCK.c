#include<stdio.h>
#include<string.h>
main()
{
    int count=0,b,i,j;
    char a[110]= {0};
    scanf("%s",a);
    b=strlen(a);
    for(i=0; i<b; i++)
    {
        if(a[i]>=65 && a[i]<=90)
    {
        count++;
    }
}
if(count==b)
    {
        for(i=0; i<b; i++)
        {
            a[i]=a[i]+32;
        }
        printf("%s",a);
        return 0;
    }
    else if((a[0]>=97 && a[0]<=122) && count==b-1)
    {
        a[0]=a[0]-32;
        for(i=1; i<b; i++)
        {
            a[i]=a[i]+32;
        }
        printf("%s",a);
        return 0;
    }
    else
    {
        printf("%s",a);
    }
    getch();
}


