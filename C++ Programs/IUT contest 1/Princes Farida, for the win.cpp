#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,cs=0;
    cin>>t;
    while(t--)
    {
        cs++;
        cin>>n;
        if(n==0)
        {
            cout<<"Case "<<cs<<": "<<0<<endl;
        }
        else
        {
            long long a[n],i,inclusive=0,exclusive=0,temp;
            for(i=0; i<n; i++)
            {
                cin>>a[i];
            }
            inclusive=a[0];
            exclusive=0;
            for(i=1; i<n; i++)
            {
                temp=inclusive;
                inclusive=max(inclusive,a[i]+exclusive);
                exclusive=temp;
            }
            cout<<"Case "<<cs<<": "<<inclusive<<endl;
        }
    }
    return 0;
}
