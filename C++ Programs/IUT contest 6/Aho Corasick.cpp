#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main()
{
    fastio;
    int a,b,n,c;
    string s;
    cin>>s;
    if(s.size()==1)
    {
        c=s[0]-48;
        if(c==0)
        {
            cout<<4;
            return 0;
        }
    }
    if(s=="0")
    {
        cout<<4;
    }
    else
    {
        b=s[s.size()-1]-48;
        a=s[s.size()-2]-48;
    }
    n=(a*10)+b;
    if(n%4==0)
    {
        cout<<4;
    }
    else
    {
        cout<<0;
    }
    return 0;
}

