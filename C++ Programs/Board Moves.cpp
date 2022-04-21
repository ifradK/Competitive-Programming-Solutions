#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,ans,sum,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        sum=0;
        ans=0;
        cnt=1;
        for(i=1; ;i++)
        {
            if(cnt>=n*n)
            {
                break;
            }
            sum=sum+8;
            cnt=cnt+sum;
            ans=ans+(sum*i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
