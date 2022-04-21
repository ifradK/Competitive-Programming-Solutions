#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    string a;
    long long i,t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<a[0];
        for(i=1;i<a.size();i=i+2)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
