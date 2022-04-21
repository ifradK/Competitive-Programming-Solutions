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
    long long odd=0,even=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(odd==0 || even==0)
    {
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
