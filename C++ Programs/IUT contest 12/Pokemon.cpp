#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,cnt=0,j;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0,j=1; ; )
    {
        if(i==n || j==n)
        {
            break;
        }
        if(a[i]<a[j])
        {
            a[i]=0;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
