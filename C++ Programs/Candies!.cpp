#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,q,l,r,i;
    cin>>n;
    long long s[n+1],sum[n+1];
    sum[0]=0;
    cin>>s[1];
    sum[1]=s[1];
    for(i=2;i<=n;i++)
    {
        cin>>s[i];
        sum[i]=sum[i-1]+s[i];
    }
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        l--;
        cout<<(sum[r]-sum[l])/10<<endl;
    }
    return 0;
}
