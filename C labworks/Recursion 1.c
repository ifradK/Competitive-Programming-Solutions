#include<stdio.h>
#include<string.h>
void rev(char *str, int start,int end)
{
    char ch;
    if(start>=end)
    {
        //printf("%s",str);
        return;
    }
    ch=*(str+start);
    *(str+start)=*(str+end);
    *(str+end)=ch;
    rev(str,start+1,end-1);
}
main()
{
    char str[100]={0};
    scanf("%s",&str);
    rev(str,0,strlen(str)-1);
    printf("%s\n",str);
    return 0;
}
