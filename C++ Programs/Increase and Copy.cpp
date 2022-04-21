#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t;
    cin>>t;
    while(t--)
    {
        long double n,temp,ans;
        cin>>n;
        temp=sqrt(n);
        temp=floor(temp)-1;
        ans=ceil(temp+(n/(temp+1)))-1;
        cout<<ans<<endl;
    }
    return 0;
}
