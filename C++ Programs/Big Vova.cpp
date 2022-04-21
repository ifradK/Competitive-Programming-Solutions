#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<long long>());
        cout<<a[0]<<" ";
        long long gcd=-1,mx;
        mx=a[0];
        a[0]=-1;
        for(i=1; i<n; i++)
        {
            gcd=mx;
            mx=-1;
            for(j=0; j<n; j++)
            {
                if(a[j]!=-1)
                {
                    if(__gcd(gcd,a[j])>mx)
                    {
                        mx=__gcd(gcd,a[j]);
                        temp=j;
                    }
                }
            }
            cout<<a[temp]<<" ";
            a[temp]=-1;
        }
        cout<<endl;
    }
    return 0;
}
