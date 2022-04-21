#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+1],r=0,l=0,cnt=0;
        a[0]=-1;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==1)
            {
                l=i;
                break;
            }
        }
        for(i=n;i>0;i--)
        {
            if(a[i]==1)
            {
                r=i;
                break;
            }
        }
        for(i=l;i<=r;i++)
        {
            if(a[i]==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
