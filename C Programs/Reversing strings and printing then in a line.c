#include<stdio.h>
#include<string.h>
main()
{
    int a,i,j,k;
    char b[1010][1010]={0},c[1010][1010]={0};
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",b[i]);
    }
    for(i=0;i<a;i++)
    {
        int len=strlen(b[i]);
        for(j=0,k=len-1;j<len,k>=0;j++,k--)
        {
            c[i][j]=b[i][k];
        }
    }
    for(i=a-1;i>=1;i--)
    {
        printf("%s ",c[i]);
    }
        printf("%s.",c[0]);


    getch();
}

