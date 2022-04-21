#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,mn,diff;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        mn=INT_MAX;
        for(i=0;i<n-1;i++)
        {
            diff=a[i+1]-a[i];
            if(diff<mn)
            {
                mn=diff;
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
