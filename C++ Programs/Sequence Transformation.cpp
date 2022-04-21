#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+2],temp=LONG_MAX;
        pair<long long, long long> b[n+20];
        memset(b,0,sizeof(b));
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        a[0]=a[1];
        a[n+1]=a[n];
        for(i=1; i<=n; i++)
        {
            bool flag=false;
            for(j=i; j<=n; j++)
            {
                if(a[j]==a[j+1])
                {
                    if(flag==false)
                    {
                        b[a[j]].first++;
                        b[a[j]].second=a[j];
                        flag=true;
                    }
                }
                else
                {
                    if(flag==false)
                    {
                        b[a[j]].first++;
                        b[a[j]].second=a[j];
                        flag=true;
                    }
                    break;
                }
            }
            i=j;
        }
        sort(b,b+n+20);
        for(i=0; i<n+20; i++)
        {
            if(b[i].first!=0)
            {
                if(a[1]==b[i].second)
                {
                    b[i].first--;
                }
                if(a[n]==b[i].second)
                {
                    b[i].first--;
                }
                if(b[i].first+1<temp)
                {
                    temp=b[i].first+1;
                }
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}
