#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long n,i,mn=INT_MAX,ans,p=0;
    cin>>n;
    long long a[n];
    string str;
    cin>>str;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(str[i]=='R' && str[i+1]=='L')
        {
            p=1;
            ans=(a[i+1]-a[i])/2;
            if(ans<mn)
            {
                mn=ans;
            }
        }
    }
    if(p!=1)
    {
        cout<<-1;
        return 0;
    }
    cout<<mn;
    return 0;
}
