#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<(s[0]+s[1]+s[2]==s[3]+s[4]+s[5]? "YES":"NO")<<endl;
    }
    return 0;
}
