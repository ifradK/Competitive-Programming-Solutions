#include<stdio.h>
#include<string.h>
main()
{
    int lena,lenb,lenc,i1;
    int q=0,w=0,e=0,r=0,t=0,y=0,u=0,i=0,o=0,p=0,a1=0,s=0,d=0,f=0,g=0,h=0,j=0,k=0,l=0,z=0,x=0,c1=0,v=0,b1=0,n=0,m=0;
    int qq=0,ww=0,ee=0,rr=0,tt=0,yy=0,uu=0,ii=0,oo=0,pp=0,aa=0,ss=0,dd=0,ff=0,gg=0,hh=0,jj=0,kk=0,ll=0,zz=0,xx=0,cc=0,vv=0,bb=0,nn=0,mm=0;
    char a[110]={0},b[110]={0},c[110]={0};
    gets(a);
    gets(b);
    gets(c);

    lena=strlen(a);
    lenb=strlen(b);
    lenc=strlen(c);

    for(i1=0;i1<lena;i1++)
    {
        if(a[i1]=='A'){a1++;}
        else if(a[i1]=='Z'){z++;}
        else if(a[i1]=='B'){b1++;}
        else if(a[i1]=='C'){c1++;}
        else if(a[i1]=='D'){d++;}
        else if(a[i1]=='E'){e++;}
        else if(a[i1]=='F'){f++;}
        else if(a[i1]=='G'){g++;}
        else if(a[i1]=='H'){h++;}
        else if(a[i1]=='I'){i++;}
        else if(a[i1]=='J'){j++;}
        else if(a[i1]=='K'){k++;}
        else if(a[i1]=='L'){l++;}
        else if(a[i1]=='M'){m++;}
        else if(a[i1]=='N'){n++;}
        else if(a[i1]=='O'){o++;}
        else if(a[i1]=='P'){p++;}
        else if(a[i1]=='Q'){q++;}
        else if(a[i1]=='R'){r++;}
        else if(a[i1]=='S'){s++;}
        else if(a[i1]=='T'){t++;}
        else if(a[i1]=='U'){u++;}
        else if(a[i1]=='V'){v++;}
        else if(a[i1]=='W'){w++;}
        else if(a[i1]=='X'){x++;}
        else if(a[i1]=='Y'){y++;}
    }
    for(i1=0;i1<lenb;i1++)
    {
        if(b[i1]=='A'){a1++;}
        else if(b[i1]=='Z'){z++;}
        else if(b[i1]=='B'){b1++;}
        else if(b[i1]=='C'){c1++;}
        else if(b[i1]=='D'){d++;}
        else if(b[i1]=='E'){e++;}
        else if(b[i1]=='F'){f++;}
        else if(b[i1]=='G'){g++;}
        else if(b[i1]=='H'){h++;}
        else if(b[i1]=='I'){i++;}
        else if(b[i1]=='J'){j++;}
        else if(b[i1]=='K'){k++;}
        else if(b[i1]=='L'){l++;}
        else if(b[i1]=='M'){m++;}
        else if(b[i1]=='N'){n++;}
        else if(b[i1]=='O'){o++;}
        else if(b[i1]=='P'){p++;}
        else if(b[i1]=='Q'){q++;}
        else if(b[i1]=='R'){r++;}
        else if(b[i1]=='S'){s++;}
        else if(b[i1]=='T'){t++;}
        else if(b[i1]=='U'){u++;}
        else if(b[i1]=='V'){v++;}
        else if(b[i1]=='W'){w++;}
        else if(b[i1]=='X'){x++;}
        else if(b[i1]=='Y'){y++;}
    }
    for(i1=0;i1<lenc;i1++)
    {
        if(c[i1]=='A'){aa++;}
        else if(c[i1]=='Z'){zz++;}
        else if(c[i1]=='B'){bb++;}
        else if(c[i1]=='C'){cc++;}
        else if(c[i1]=='D'){dd++;}
        else if(c[i1]=='E'){ee++;}
        else if(c[i1]=='F'){ff++;}
        else if(c[i1]=='G'){gg++;}
        else if(c[i1]=='H'){hh++;}
        else if(c[i1]=='I'){ii++;}
        else if(c[i1]=='J'){jj++;}
        else if(c[i1]=='K'){kk++;}
        else if(c[i1]=='L'){ll++;}
        else if(c[i1]=='M'){mm++;}
        else if(c[i1]=='N'){nn++;}
        else if(c[i1]=='O'){oo++;}
        else if(c[i1]=='P'){pp++;}
        else if(c[i1]=='Q'){qq++;}
        else if(c[i1]=='R'){rr++;}
        else if(c[i1]=='S'){ss++;}
        else if(c[i1]=='T'){tt++;}
        else if(c[i1]=='U'){uu++;}
        else if(c[i1]=='V'){vv++;}
        else if(c[i1]=='W'){ww++;}
        else if(c[i1]=='X'){xx++;}
        else if(c[i1]=='Y'){yy++;}
    }

    if(a1==aa && b1==bb && c1==cc && d==dd && e==ee && f==ff && g==gg && h==hh && i==ii && j==jj && k==kk && l==ll && m==mm && n==nn && o==oo && p==pp && q==qq && r==rr && s==ss && t==tt && u==uu && v==vv && w==ww && x==xx && y==yy && z==zz)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    getch();
}
