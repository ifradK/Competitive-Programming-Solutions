#include<stdio.h>
#include<string.h>
main()
{
    char a[10]={0};
    scanf("%s",a);
    int i,len,min=999,diff;
    len=strlen(a);
    for(i=0;i<len-2;i++)
    {
       diff=fabs((((a[i]-48)*100)+((a[i+1]-48)*10)+(a[i+2]-48))-753);
        if(diff<min)
        {
            min=diff;
        }
    }
    printf("%d",min);
    getch();
}
