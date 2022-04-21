#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],sum[101]={0},mx=-1,cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum[a[i]]++;
            mx=max(mx,a[i]);
        }
        sort(a,a+n);
        for(i=0;i<=mx;i++)
        {
            if(sum[i]==0)
            {
                break;
            }
            sum[i]--;
            cnt++;
        }
        for(i=0;i<=mx;i++)
        {
            if(sum[i]==0)
            {
                break;
            }
            sum[i]--;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
