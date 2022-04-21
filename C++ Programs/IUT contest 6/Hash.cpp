#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long a[10000000],cnt[10000000];

int main()
{
    fastio;
    long long n,k,ans=0,l=1,r=1,current=0,i,left,right;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    while(r<=n)
    {
        if(cnt[a[r]]==0)
        {
            current++;
        }
        cnt[a[r]]++;
        while(current>k)
        {
            cnt[a[l]]--;
            if(cnt[a[l]]==0)
            {
                current--;
            }
            l++;
        }
        if(current<=k)
        {
            if(r-l+1>ans)
            {
                left=l;
                right=r;
                ans=r-l+1;
            }
        }
        r++;
    }
    cout<<left<<" "<<right;
    return 0;
}

