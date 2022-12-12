#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,m,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string s[n];
        ll mn=LLONG_MAX;
        for(i=0;i<n;i++){cin>>s[i];}
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                ll sum=0;
                for(k=0;k<m;k++)
                {
                    sum=sum+abs(s[i][k]-s[j][k]);
                }
                mn=min(sum,mn);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
