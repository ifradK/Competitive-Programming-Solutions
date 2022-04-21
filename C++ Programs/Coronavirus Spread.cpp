#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],b[n];
        memset(a,0,sizeof(a));
        for(i=0; i<n; i++)
        {
            b[i]=1;
        }
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        x=0;
        for(i=0; i<n; i++)
        {
            bool flag3=false,flag4=false;
            long long cnt=1,cnt2=1;
            for(j=i; j<n-1; j++)
            {
                if(a[j+1]-a[j]<=2 && flag3==false)
                {
                    cnt++;
                }
                else
                {
                    flag3=true;
                }
            }
            for(k=i; k>0; k--)
            {
                if(a[k]-a[k-1]<=2 && flag4==false)
                {
                    cnt2++;
                }
                else
                {
                    flag4=true;
                }
            }
            b[x]=cnt+cnt2-1;
            x++;
        }
        long long mn=INT_MAX,mx=INT_MIN;
        for(i=0; i<n; i++)
        {
            mn=min(b[i],mn);
            mx=max(b[i],mx);
        }
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}

