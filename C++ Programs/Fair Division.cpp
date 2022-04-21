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
        long long a[n],alice=0,bob=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<long long>());
        for(i=0;i<n;i++)
        {
            if(alice>=bob)
            {
                bob=bob+a[i];
            }
            else
            {
                alice=alice+a[i];
            }
        }
        if(alice==bob)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
