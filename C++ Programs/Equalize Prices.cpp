#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long q,n,k,i;
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]+k<a[n-1]-k)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<a[0]+k<<endl;
        }
    }
    return 0;
}
