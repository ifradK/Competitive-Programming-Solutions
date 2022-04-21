#include<stdio.h>
main()
{
    int n,i,j;
    int p=0,g=0,b=0,o=0,r=0,y=0;
    char a[10][10]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    printf("%d\n",6-n);
    for(i=0;i<n;i++)
    {
        if(a[i][0]=='p'){p=1;}
        else if(a[i][0]=='g'){g=1;}
        else if(a[i][0]=='b'){b=1;}
        else if(a[i][0]=='o'){o=1;}
        else if(a[i][0]=='r'){r=1;}
        else if(a[i][0]=='y'){y=1;}
    }
    if(p!=1){printf("Power\n");}
    if(g!=1){printf("Time\n");}
    if(b!=1){printf("Space\n");}
    if(o!=1){printf("Soul\n");}
    if(r!=1){printf("Reality\n");}
    if(y!=1){printf("Mind\n");}

    getch();
}
