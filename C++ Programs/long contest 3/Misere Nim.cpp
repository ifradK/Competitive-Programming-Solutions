#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,k,i,sum=0,cs=0,ans=0;
    cin>>t;
    while(t--)
    {
        cs++;
        sum=0;
        ans=0;
        cin>>k;
        long long a[k];
        for(i=0;i<k;i++)
        {
            cin>>a[i];
            ans=ans^a[i];
            sum=sum+a[i];
        }
        if(sum==k)
        {
            if(k%2==0)
            {
                cout<<"Case "<<cs<<": "<<"Alice"<<endl;
            }
            else
            {
                cout<<"Case "<<cs<<": "<<"Bob"<<endl;
            }
        }
        else
        {
            if(ans==0)
            {
                cout<<"Case "<<cs<<": "<<"Bob"<<endl;
            }
            else
            {
                cout<<"Case "<<cs<<": "<<"Alice"<<endl;
            }
        }
    }
    return 0;
}
