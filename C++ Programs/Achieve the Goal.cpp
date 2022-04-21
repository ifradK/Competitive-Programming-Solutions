#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,m,k,i,sum=0,ans;
    cin>>n>>k>>m;
    long a[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    ans=(m*n)-sum;
    if(ans>k)
    {
        cout<<-1;
    }
    else if(ans<0)
    {
        cout<<0;
    }
    else
    {
        cout<<ans;
    }
    return 0;
}
