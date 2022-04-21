#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,sum=0,cnt=0,i;
    cin>>n;
    long long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(sum<=a[i])
        {
            sum=sum+a[i];
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
