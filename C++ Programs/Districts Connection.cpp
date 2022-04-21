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
        long long a[n],temp,cnt=0,temp1;
        bool flag=false;
        cin>>a[0];
        temp=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=a[0])
            {
                flag=true;
            }
        }
        if(flag==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]==temp)
                {
                    a[i]=-1;
                    cnt++;
                }
                else
                {
                    temp1=i+1;
                }
            }
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                if(i==temp1-1)
                {
                    continue;
                }
                else if(a[i]==-1)
                {
                    cout<<temp1<<" "<<i+1<<endl;
                }
                else
                {
                    cout<<1<<" "<<i+1<<endl;
                }
            }
        }
    }
    return 0;
}
