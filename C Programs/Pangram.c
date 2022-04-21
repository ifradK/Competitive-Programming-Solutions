#include<stdio.h>
#include<string.h>
main()
{
    int n1,i1,count;
    int q=0,w=0,e=0,r=0,t=0,y=0,u=0,i=0,o=0,p=0,a=0,s=0,d=0,f=0,g=0,h=0,j=0,k=0,l=0,z=0,x=0,c=0,v=0,b=0,n=0,m=0;
    char a1[110]={0};

    scanf("%d",&n1);
    scanf("%s",a1);

    for(i1=0;i1<n1;i1++)
    {
        if(a1[i1]=='a' || a1[i1]=='A'){a=1;}
        else if(a1[i1]=='z' || a1[i1]=='Z'){z=1;}
        else if(a1[i1]=='b' || a1[i1]=='B'){b=1;}
        else if(a1[i1]=='c' || a1[i1]=='C'){c=1;}
        else if(a1[i1]=='d' || a1[i1]=='D'){d=1;}
        else if(a1[i1]=='e' || a1[i1]=='E'){e=1;}
        else if(a1[i1]=='f' || a1[i1]=='F'){f=1;}
        else if(a1[i1]=='g' || a1[i1]=='G'){g=1;}
        else if(a1[i1]=='h' || a1[i1]=='H'){h=1;}
        else if(a1[i1]=='i' || a1[i1]=='I'){i=1;}
        else if(a1[i1]=='j' || a1[i1]=='J'){j=1;}
        else if(a1[i1]=='k' || a1[i1]=='K'){k=1;}
        else if(a1[i1]=='l' || a1[i1]=='L'){l=1;}
        else if(a1[i1]=='m' || a1[i1]=='M'){m=1;}
        else if(a1[i1]=='n' || a1[i1]=='N'){n=1;}
        else if(a1[i1]=='o' || a1[i1]=='O'){o=1;}
        else if(a1[i1]=='p' || a1[i1]=='P'){p=1;}
        else if(a1[i1]=='q' || a1[i1]=='Q'){q=1;}
        else if(a1[i1]=='r' || a1[i1]=='R'){r=1;}
        else if(a1[i1]=='s' || a1[i1]=='S'){s=1;}
        else if(a1[i1]=='t' || a1[i1]=='T'){t=1;}
        else if(a1[i1]=='u' || a1[i1]=='U'){u=1;}
        else if(a1[i1]=='v' || a1[i1]=='V'){v=1;}
        else if(a1[i1]=='w' || a1[i1]=='W'){w=1;}
        else if(a1[i1]=='x' || a1[i1]=='X'){x=1;}
        else if(a1[i1]=='y' || a1[i1]=='Y'){y=1;}

    }
    count=q+w+e+r+t+y+u+i+o+p+a+s+d+f+g+h+j+k+l+z+x+c+v+b+n+m;
    if(count==26)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

        getch();
}
