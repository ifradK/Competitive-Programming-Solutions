
















#include<stdio.h>
#include<string.h>
main()
{
    int i1,len,q=0,w=0,e=0,r=0,t=0,y=0,u=0,i=0,o=0,p=0,a=0,s=0,d=0,f=0,g=0,h=0,j=0,k=0,l=0,z=0,x=0,c=0,v=0,b=0,n=0,m=0,count=0;
    char a1[1000];
    gets(a1);
    len=strlen(a1);

    for(i1=1; i1<len-1; i1=i1+3)
    {
        if(a1[i1]=='a')
        {
            a=1;
        }
        else if(a1[i1]=='b')
        {
            b=1;
        }
        else if(a1[i1]=='c')
        {
            c=1;
        }
        else if(a1[i1]=='y')
        {
            y=1;
        }
        else if(a1[i1]=='d')
        {
            d=1;
        }
        else if(a1[i1]=='e')
        {
            e=1;
        }
        else if(a1[i1]=='f')
        {
            f=1;
        }
        else if(a1[i1]=='g')
        {
            g=1;
        }
        else if(a1[i1]=='h')
        {
            h=1;
        }
        else if(a1[i1]=='i')
        {
            i=1;
        }
        else if(a1[i1]=='j')
        {
            j=1;
        }
        else if(a1[i1]=='k')
        {
            k=1;
        }
        else if(a1[i1]=='l')
        {
            l=1;
        }
        else if(a1[i1]=='m')
        {
            m=1;
        }
        else if(a1[i1]=='n')
        {
            n=1;
        }
        else if(a1[i1]=='o')
        {
            o=1;
        }
        else if(a1[i1]=='p')
        {
            p=1;
        }
        else if(a1[i1]=='q')
        {
            q=1;
        }
        else if(a1[i1]=='r')
        {
            r=1;
        }
        else if(a1[i1]=='s')
        {
            s=1;
        }
        else if(a1[i1]=='t')
        {
            t=1;
        }
        else if(a1[i1]=='u')
        {
            u=1;
        }
        else if(a1[i1]=='v')
        {
            v=1;
        }
        else if(a1[i1]=='w')
        {
            w=1;
        }
        else if(a1[i1]=='x')
        {
            x=1;
        }
        else if(a1[i1]=='z')
        {
            z=1;
        }
    }

    count=q+w+e+r+t+y+u+i+o+p+a+s+d+f+g+h+j+k+l+z+x+c+v+b+n+m;
    printf("%d",count);
    getch();
}
