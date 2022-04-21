#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    string str;
    cin>>str;
    for(ll i=0;i<str.size();i++)
    {
        if(str[i]=='.')
        {
            break;
        }
        cout<<str[i];
    }
    return 0;
}
