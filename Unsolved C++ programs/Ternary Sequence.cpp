#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>c>>c>>a;
        cin>>c>>b>>c;
        if(a==0 || b==0)
        {
            cout<<(-1)*max(a,b)*2<<endl;
        }
        else
        {
            cout<<min(a,b)*2<<endl;
        }
    }
    return 0;
}
