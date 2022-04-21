#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[n-2]+a[n-3]<=a[n-1])
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        swap(a[n-2],a[n-1]);
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
