#include<stdio.h>
main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    if(a>=b){max=a;}
    if(a<b){max=b;}
    //int ans=(6-max+1)/6;
    if(max==1){printf("1/1");}
    else if(max==2){printf("5/6");}
    else if(max==3){printf("2/3");}
    else if(max==4){printf("1/2");}
    else if(max==5){printf("1/3");}
    else if(max==6){printf("1/6");}
    getch();
}
