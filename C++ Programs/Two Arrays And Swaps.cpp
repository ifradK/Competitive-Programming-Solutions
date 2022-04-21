#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long a[n],b[n],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<long long>());
        for(i=0;i<k;i++)
        {
            if(b[i]>a[i])
            {
                a[i]=b[i];
            }
        }
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}

