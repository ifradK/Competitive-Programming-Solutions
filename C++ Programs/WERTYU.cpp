#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    string str;
    map<char,char> mp;
    mp['1']='`';
    mp['2']='1';
    mp['3']='2';
    mp['4']='3';
    mp['5']='4';
    mp['6']='5';
    mp['7']='6';
    mp['8']='7';
    mp['9']='8';
    mp['0']='9';
    mp['-']='0';
    mp['=']='-';
    mp['W']='Q';
    mp['E']='W';
    mp['R']='E';
    mp['T']='R';
    mp['Y']='T';
    mp['U']='Y';
    mp['I']='U';
    mp['O']='I';
    mp['P']='O';
    mp['[']='P';
    mp[']']='[';
    //mp['\' = '';
    mp['S']='A';
    mp['D']='S';
    mp['F']='D';
    mp['G']='F';
    mp['H']='G';
    mp['J']='H';
    mp['K']='J';
    mp['L']='K';
    mp[';']='L';
    //mp['']='';
    mp['X']='Z';
    mp['C']='X';
    mp['V']='C';
    mp['B']='V';
    mp['N']='B';
    mp['M']='N';
    mp[',']='M';
    mp['.']=',';
    mp['/']='.';
    while(getline(cin,str))
    {
        for(ll i=0; i<str.size(); i++)
        {
            if(str[i]==' ')
            {
                cout<<" ";
            }
            else if(str[i]==39)
            {
                cout<<';';
            }
            else if(str[i]==92)
            {
                cout<<']';
            }
            else
            {
                cout<<mp[str[i]];
            }
        }
        cout<<endl;
    }
    return 0;
}
