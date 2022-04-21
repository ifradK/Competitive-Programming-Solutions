#include<stdio.h>
main()
{
    int i,n,anton=0,danik=0;
    char str[100000];
    scanf("%d",&n);
    scanf("%s",&str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='A')
        {
         anton++;
        }
        else if(str[i]=='D')
        {
            danik++;
        }
    }
    if(anton>danik)
    {
        printf("Anton");
    }
    else if(anton<danik)
    {
        printf("Danik");
    }
    else if(anton==danik)
    {
        printf("Friendship");
    }
    getch();
}
