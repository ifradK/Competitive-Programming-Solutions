#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    int i,len,up=0,low=0;
    gets(a);
    len=strlen(a);

    for(i=0;i<len;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            up++;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            low++;
        }
    }

    if(low>=up)
    {
     for(i=0;i<len;i++)
     {
         if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i];
        }
     }
    }
     else if(low<up)
    {
     for(i=0;i<len;i++)
     {
         if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i];
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
     }
    }
    puts(a);
    getch();
}
