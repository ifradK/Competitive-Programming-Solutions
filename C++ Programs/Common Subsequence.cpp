#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        bool flag=false;
        long long a[n],b[m];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    flag=true;
                    break;
                }
            }
            if(flag==true)
            {
                break;
            }
        }
        if(flag==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<a[i]<<endl;
        }
    }
    return 0;
}
