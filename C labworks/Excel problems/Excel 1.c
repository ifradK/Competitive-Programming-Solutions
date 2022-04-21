#include<stdio.h>
#include<string.h>
main()
{
    int i,j,n,first,first1,second;
    char answer[100]={0};
    scanf("%d",&n);
    first1=n;
    for(i=0; i<26; i++)
    {
        first=first1/26;
        second=first1%26;
        if(second==1)
        {
            answer[i]='A';
        }
        else if(second==2)
        {
            answer[i]='B';
        }
        else if(second==3)
        {
            answer[i]='C';
        }
        else if(second==4)
        {
            answer[i]='D';
        }
        else if(second==5)
        {
            answer[i]='E';
        }
        else if(second==6)
        {
            answer[i]='F';
        }
        else if(second==7)
        {
            answer[i]='G';
        }
        else if(second==8)
        {
            answer[i]='H';
        }
        else if(second==9)
        {
            answer[i]='I';
        }
        else if(second==10)
        {
           answer[i]='J';
        }
        else if(second==11)
        {
            answer[i]='K';
        }
        else if(second==12)
        {
            answer[i]='L';
        }
        else if(second==13)
        {
            answer[i]='M';
        }
        else if(second==14)
        {
            answer[i]='N';
        }
        else if(second==15)
        {
            answer[i]='O';
        }
        else if(second==16)
        {
            answer[i]='P';
        }
        else if(second==17)
        {
            answer[i]='Q';
        }
        else if(second==18)
        {
            answer[i]='R';
        }
        else if(second==19)
        {
            answer[i]='S';
        }
        else if(second==20)
        {
            answer[i]='T';
        }
        else if(second==21)
        {
            answer[i]='U';
        }
        else if(second==22)
        {
            answer[i]='V';
        }
        else if(second==23)
        {
            answer[i]='W';
        }
        else if(second==24)
        {
            answer[i]='X';
        }
        else if(second==25)
        {
            answer[i]='Y';
        }
        else if(second==26)
        {
            answer[i]='Z';
        }
        first1=first;
        if(second==0)
        {
            break;
        }

    }

    for(j=i-1;j>=0;j--)
    {
        printf("%c",answer[j]);
    }

    getch();
}
