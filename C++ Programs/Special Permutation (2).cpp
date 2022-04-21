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
        cout<<n<<" ";
        for(i=1;i<n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
