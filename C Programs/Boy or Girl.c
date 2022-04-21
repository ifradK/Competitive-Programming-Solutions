#include<stdio.h>
#include<string.h>
main()
{
    char str[100];
    int sum,n,i,A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0;
    scanf("%s",&str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='a')
            {A=1;}
        else if(str[i]=='b')
            {B=1;}
              else if(str[i]=='c')
            {C=1;}
              else if(str[i]=='d')
            {D=1;}
              else if(str[i]=='e')
            {E=1;}
              else if(str[i]=='f')
            {F=1;}
              else if(str[i]=='g')
            {G=1;}
              else if(str[i]=='h')
            {H=1;}
              else if(str[i]=='i')
            {I=1;}
              else if(str[i]=='j')
            {J=1;}
              else if(str[i]=='k')
            {K=1;}
              else if(str[i]=='l')
            {L=1;}
              else if(str[i]=='m')
            {M=1;}
              else if(str[i]=='n')
            {N=1;}
              else if(str[i]=='o')
            {O=1;}
              else if(str[i]=='p')
            {P=1;}
              else if(str[i]=='q')
            {Q=1;}
              else if(str[i]=='r')
            {R=1;}
              else if(str[i]=='s')
            {S=1;}
              else if(str[i]=='t')
            {T=1;}
              else if(str[i]=='u')
            {U=1;}
              else if(str[i]=='v')
            {V=1;}
              else if(str[i]=='w')
            {W=1;}
              else if(str[i]=='x')
            {X=1;}
              else if(str[i]=='y')
            {Y=1;}
              else if(str[i]=='z')
            {Z=1;}

    }


sum=A+B+C+D+E+F+G+H+I+J+K+L+M+N+O+P+Q+R+S+T+U+V+W+X+Y+Z;

if(sum%2==0)
    printf("CHAT WITH HER!");
    if(sum%2!=0)
    printf("IGNORE HIM!");
getch();
}
