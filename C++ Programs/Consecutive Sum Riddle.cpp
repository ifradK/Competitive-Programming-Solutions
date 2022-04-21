#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)
        {
            cout<<-1<<" "<<+1<<endl;
        }
        else
        {
            cout<<-n+1<<" "<<n<<endl;
        }
    }
    return 0;
}
