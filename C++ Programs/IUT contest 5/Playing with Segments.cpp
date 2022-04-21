#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,a,i;
    cin>>n>>a;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(a==1)
    {
        sort(arr,arr+n);
        cout<<arr[0];
        return 0;
    }
    else if(a>2)
    {
        sort(arr,arr+n,greater<long long>());
        cout<<arr[0];
        return 0;
    }
    else if(a==2)
    {
        cout<<max(arr[0],arr[n-1]);
        return 0;
    }
    return 0;
}
