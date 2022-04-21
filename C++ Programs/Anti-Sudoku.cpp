#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    string str[9];
    long long t,i;
    cin>>t;
    while(t--)
    {
        for(i=0;i<9;i++)
        {
            cin>>str[i];
        }
        str[0][0]=str[0][1];
        str[1][3]=str[1][4];
        str[2][6]=str[2][7];
        str[3][1]=str[4][1];
        str[4][4]=str[5][4];
        str[5][7]=str[5][8];
        str[6][2]=str[6][1];
        str[7][5]=str[7][4];
        str[8][8]=str[8][7];
        for(i=0;i<9;i++)
        {
            cout<<str[i]<<endl;
        }
    }
    return 0;
}
