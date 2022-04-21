#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            for(i=0;i<n/2;i++)
            {
                cout<<1;
            }
        }
        else
        {
            cout<<7;
            for(i=0;i<(n-3)/2;i++)
            {
                cout<<1;
            }
        }
        cout<<endl;
    }
    return 0;
}
