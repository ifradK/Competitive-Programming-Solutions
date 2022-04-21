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
        long long a[n+1],mx=-1,temp;
        bool flag=false;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        for(i=1;i<=n;i++)
        {
            if(i==1 && a[i]==mx)
            {
                if(a[i+1]<a[i])
                {
                    temp=i;
                    flag=true;
                    break;
                }
            }
            else if(i==n && a[i]==mx)
            {
                if(a[i-1]<a[i])
                {
                    temp=i;
                    flag=true;
                    break;
                }
            }
            else if(a[i]==mx)
            {
                if(a[i+1]<a[i] || a[i-1]<a[i])
                {
                    temp=i;
                    flag=true;
                    break;
                }
            }
        }
        if(flag==false)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<temp<<endl;
        }
    }
    return 0;
}
