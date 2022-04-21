#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0,j=n-1;i<n-1; )
        {
            if(a[i]<a[j])
            {
                if(a[i]<a[j] && a[i]>=a[i+1])
            }
            else
            {

            }
        }
    }
}
