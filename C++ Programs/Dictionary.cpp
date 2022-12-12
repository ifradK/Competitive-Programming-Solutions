#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll second,first=s[0]-'a';
        if(s[1]>s[0])
        {
            second=s[1]-'a';
        }
        else
        {
            second=s[1]-'a'+1;
        }
        cout<<first*25+second<<endl;
    }
    return 0;
}
