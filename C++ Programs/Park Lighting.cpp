#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long area=n*m;
        if(area%2==0)
        {
            cout<<area/2<<endl;
        }
        else
        {
            cout<<(area/2)+1<<endl;
        }
    }
    return 0;
}
