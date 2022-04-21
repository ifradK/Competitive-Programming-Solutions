#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,j;
    cin>>n;
    long long a[n];
    list<long long> ls;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=2; i<=n; i=i+2)
    {
        for(j=i; j>i-2; j--)
        {
            ls.push_front(a[j-1]);
        }
    }
    if(n%2==0)
    {
        cout<<(n/2)-1<<endl;
        for(auto it=ls.begin(); it!=ls.end(); it++)
        {
            cout<<*it<<" ";
        }
    }
    else
    {
        cout<<(n/2)<<endl;
        ls.push_front(a[n-1]);
        for(auto it=ls.begin(); it!=ls.end(); it++)
        {
            cout<<*it<<" ";
        }
    }
    return 0;
}
