#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=3; ; i=i*2+1)
        {
            if(n%i==0)
            {
                cout<<n/i<<endl;
                break;
            }

        }
    }
    return 0;
}
