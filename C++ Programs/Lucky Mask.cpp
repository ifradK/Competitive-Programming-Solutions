#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

long long mask(long long a)
{
    string str=to_string(a),str2="";
    for(long long i=0;i<str.size();i++)
    {
        if(str[i]=='4')
        {
            str2=str2+'4';
        }
        else if(str[i]=='7')
        {
            str2=str2+'7';
        }
    }
    if(str2.size()>0)
    {
        long long temp=stoi(str2);
        return temp;
    }
    else
    {
        return 0;
    }
}

int main()
{
    fastio;
    long long a,b;
    cin>>a>>b;
    a++;
    while(1)
    {
        if(mask(a)==b)
        {
            cout<<a;
            break;
        }
        a++;
    }

    return 0;
}
