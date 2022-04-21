#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long t,n,k;
    double ans,remain;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        remain=n-k;
        ans=ceil(remain/6);
        cout<<(long long)ans<<endl;
    }
    return 0;
}
