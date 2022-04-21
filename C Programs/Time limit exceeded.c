#include<stdio.h>
main()
{
    int n,tmax,i;
    int c[101],t[101];
    scanf("%d %d",&n,&tmax);
    int min=100;
    c[min]=100000000;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&c[i],&t[i]);
        if(t[i]<=tmax && c[i]<c[min])
        {
            min=i;
        }
    }
    if(min==100)
    {
        printf("TLE");
    }
    else
    {
        printf("%d",c[min]);
    }
    getch();
}
