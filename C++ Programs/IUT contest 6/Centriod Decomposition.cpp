#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,l,r,n,range;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>n;
        range=r-l+1;
        if(range==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
    return 0;
}
