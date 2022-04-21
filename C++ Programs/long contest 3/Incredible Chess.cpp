#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int t,n,i,cs=0,ans,j,val;
    cin>>t;
    while(t--)
    {
        cs++;
        ans=0;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            val=b[i]-a[i]-1;
            ans=ans^val;
        }
        if(ans==0)
        {
            cout<<"Case "<<cs<<": "<<"black wins"<<endl;
        }
        else
        {
            cout<<"Case "<<cs<<": "<<"white wins"<<endl;
        }
    }
    return 0;
}
