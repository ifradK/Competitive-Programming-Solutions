#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long a[n*k],ans=0,temp=0;
        for(i=0; i<n*k; i++)
        {
            cin>>a[i];
        }
        if(k==1)
        {
            temp=ceil((float)n/2)-1;
            ans=a[temp];
        }
        else if(n==1)
        {
            for(i=0;i<n*k;i++)
            {
                ans=ans+a[i];
            }
        }
        else if(n==2)
        {
            for(i=n*k-2; i>=0; i=i-2)
            {
                if(temp==k)
                {
                    break;
                }
                ans=ans+a[i];
                temp++;
            }
        }
        else
        {
            long long pos=n-ceil((float)n/2)+1;
            for(i=n*k-pos; i>=0; i=i-pos)
            {
                if(temp==k)
                {
                    break;
                }
                ans=ans+a[i];
                temp++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
