#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,a,b,diff;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        diff=abs(b-a);
        if(diff%10==0)
        {
            cout<<diff/10<<endl;
        }
        else
        {
            cout<<(diff/10)+1<<endl;
        }
    }
    return 0;
}
