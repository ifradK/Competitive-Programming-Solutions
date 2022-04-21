#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ans=a^b;
        cout<<ans<<endl;
    }
    return 0;
}
