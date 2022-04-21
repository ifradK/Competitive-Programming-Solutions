#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    char chess[8][8];
    int i,j,white=0,black=0;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            cin>>chess[i][j];
        }
    }
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(chess[i][j]=='Q'){white=white+9;}
            else if(chess[i][j]=='R'){white=white+5;}
            else if(chess[i][j]=='B'){white=white+3;}
            else if(chess[i][j]=='N'){white=white+3;}
            else if(chess[i][j]=='P'){white=white+1;}
            else if(chess[i][j]=='q'){black=black+9;}
            else if(chess[i][j]=='r'){black=black+5;}
            else if(chess[i][j]=='b'){black=black+3;}
            else if(chess[i][j]=='n'){black=black+3;}
            else if(chess[i][j]=='p'){black=black+1;}
        }
    }
    if(white>black)
    {
        cout<<"White";
    }
    else if(white<black)
    {
        cout<<"Black";
    }
    else
    {
        cout<<"Draw";
    }
    return 0;
}


