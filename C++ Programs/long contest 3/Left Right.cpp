#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int t,k,i,cs=0,ans,j;
    cin>>t;
    while(t--)
    {
        cs++;
        ans=0;
        cin>>k;
        long long a[2*k],b[k];
        for(i=0;i<2*k;i++)
        {
            cin>>a[i];
        }
        for(i=1,j=0;i<2*k;i=i+2,j++)
        {
            b[j]=a[i]-a[i-1]-1;
        }
        for(i=0;i<j;i++)
        {
            ans=ans^b[i];
        }
        if(ans==0)
        {
            cout<<"Case "<<cs<<": "<<"Bob"<<endl;
        }
        else
        {
            cout<<"Case "<<cs<<": "<<"Alice"<<endl;
        }
    }
    return 0;
}
