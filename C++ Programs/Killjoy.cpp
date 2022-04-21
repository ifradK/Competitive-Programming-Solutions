#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        long long a[n],sum=0,cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+x-a[i];
            if(a[i]==x)
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            cout<<0<<endl;
        }
        else if(sum==0 || cnt>0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}
