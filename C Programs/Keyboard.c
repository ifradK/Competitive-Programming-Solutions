#include<stdio.h>
#include<string.h>
main()
{
    int i,j,len;
    char n;
    char a[110]={0};
    scanf("%c",&n);
    scanf("%s",a);
    len=strlen(a);
    if(n=='L')
    {
        for(i=0;i<len;i++)
        {
            if(a[i]=='q'){a[i]='w';}
            else if(a[i]=='w'){a[i]='e';}
            else if(a[i]=='e'){a[i]='r';}
            else if(a[i]=='r'){a[i]='t';}
            else if(a[i]=='t'){a[i]='y';}
            else if(a[i]=='y'){a[i]='u';}
            else if(a[i]=='u'){a[i]='i';}
            else if(a[i]=='i'){a[i]='o';}
            else if(a[i]=='o'){a[i]='p';}
            else if(a[i]=='a'){a[i]='s';}
            else if(a[i]=='s'){a[i]='d';}
            else if(a[i]=='d'){a[i]='f';}
            else if(a[i]=='f'){a[i]='g';}
            else if(a[i]=='g'){a[i]='h';}
            else if(a[i]=='h'){a[i]='j';}
            else if(a[i]=='j'){a[i]='k';}
            else if(a[i]=='k'){a[i]='l';}
            else if(a[i]=='l'){a[i]=';';}
            else if(a[i]=='z'){a[i]='x';}
            else if(a[i]=='x'){a[i]='c';}
            else if(a[i]=='c'){a[i]='v';}
            else if(a[i]=='v'){a[i]='b';}
            else if(a[i]=='b'){a[i]='n';}
            else if(a[i]=='n'){a[i]='m';}
            else if(a[i]=='m'){a[i]=',';}
            else if(a[i]==','){a[i]='.';}
            else if(a[i]=='.'){a[i]='/';}
        }
    }
    else if(n=='R')
    {
        for(i=0;i<len;i++)
        {
            if(a[i]=='w'){a[i]='q';}
            else if(a[i]=='e'){a[i]='w';}
            else if(a[i]=='r'){a[i]='e';}
            else if(a[i]=='t'){a[i]='r';}
            else if(a[i]=='y'){a[i]='t';}
            else if(a[i]=='u'){a[i]='y';}
            else if(a[i]=='i'){a[i]='u';}
            else if(a[i]=='o'){a[i]='i';}
            else if(a[i]=='p'){a[i]='o';}
            else if(a[i]=='s'){a[i]='a';}
            else if(a[i]=='d'){a[i]='s';}
            else if(a[i]=='f'){a[i]='d';}
            else if(a[i]=='g'){a[i]='f';}
            else if(a[i]=='h'){a[i]='g';}
            else if(a[i]=='j'){a[i]='h';}
            else if(a[i]=='k'){a[i]='j';}
            else if(a[i]=='l'){a[i]='k';}
            else if(a[i]==';'){a[i]='l';}
            else if(a[i]=='x'){a[i]='z';}
            else if(a[i]=='c'){a[i]='x';}
            else if(a[i]=='v'){a[i]='c';}
            else if(a[i]=='b'){a[i]='v';}
            else if(a[i]=='n'){a[i]='b';}
            else if(a[i]=='m'){a[i]='n';}
            else if(a[i]==','){a[i]='m';}
            else if(a[i]=='.'){a[i]=',';}
            else if(a[i]=='/'){a[i]='.';}
        }
    }
    printf("%s",a);
    getch();
}
