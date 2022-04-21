#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i,j,z,peak,left,ans;
    cin>>t;
    while(t--)
    {
        ans=INT_MIN;
        cin>>n>>k;
        long long a[n+1],b[n+1],p=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        b[1]=0;
        b[n]=0;
        for(i=2,j=2; i<n; i++,j++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                b[j]=1;
                p++;
            }
            else
            {
                b[j]=0;
            }
        }
        if(p==0)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }
        else
        {
            for(i=2;i<=n;i++)
            {
                b[i]=b[i]+b[i-1];
            }
            for(i=1;i<=n-k+1;i++)
            {
                peak=b[i+k-2]-b[i];
                if(peak>ans)
                {
                    ans=peak;
                    left=i;
                }
            }
            cout<<ans+1<<" "<<left<<endl;
        }
    }
    return 0;
}
