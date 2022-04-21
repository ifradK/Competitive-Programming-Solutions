#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long cnt=0,i;
    bool flag=false;
    string str;
    cin>>str;
    for(i=0;i<str.size()-1;i++)
    {
        if(str[i]=='V' && str[i+1]=='K')
        {
            str[i]='x';
            str[i+1]='x';
            cnt++;
            i++;
        }
    }
    for(i=0; i<str.size()-1; i++)
    {
        if(str[i]=='V' && str[i+1]=='K')
        {
            cnt++;
            i++;
        }
        else if(str[i]=='V' && str[i+1]=='V' && flag==false)
        {
            cnt++;
            i++;
            flag=true;
        }
        else if(str[i]=='K' && str[i+1]=='K' && flag==false)
        {
            cnt++;
            i++;
            flag=true;
        }
    }
    cout<<cnt;
    return 0;
}
