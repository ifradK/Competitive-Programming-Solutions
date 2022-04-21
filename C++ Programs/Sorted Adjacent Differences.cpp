#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,k,flag,mid;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n%2==0)
        {
            mid=n/2-1;
        }
        else
        {
            mid=n/2;
        }
        cout<<a[mid]<<" ";
        j=mid+1;
        k=mid-1;
        for(i=1;i<=n-1;i++)
        {
            if(i%2==1)
            {
                cout<<a[j]<<" ";
                j++;
            }
            else
            {
                cout<<a[k]<<" ";
                k--;
            }
        }
        cout<<endl;
    }
    return 0;
}



