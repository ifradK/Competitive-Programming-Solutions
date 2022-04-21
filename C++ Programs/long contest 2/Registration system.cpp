#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    map<string, long long> m;
    string str;
    long long n,x;
    cin>>n;
    while(n--)
    {
        cin>>str;
        x=m[str];
        if(x==0)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<str<<x<<endl;
        }
        m[str]++;
    }
    return 0;
}
