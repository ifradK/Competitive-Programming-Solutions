#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long double t,n,k,block,diff,val;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        block=ceil(k/(n-1))-1;
        diff=k-block*(n-1);
        val=n*block;
        cout<<(long long)val+(long long)diff<<endl;
    }
    return 0;
}
