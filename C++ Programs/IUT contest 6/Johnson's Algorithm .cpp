#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    unsigned long long l,r,cnt=0,ans=0,p=1;;
    cin>>l>>r;
    long long initial=l^r;
    while(initial)
    {
        cnt++;
        initial=initial/pow(2,1);
    }
    while(cnt--)
    {
        ans=ans+p;
        p=p*pow(2,1);
    }
    cout<<ans;
    return 0;
}
