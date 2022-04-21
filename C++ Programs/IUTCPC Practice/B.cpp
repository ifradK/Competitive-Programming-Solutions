#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,area,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        area=(n*n)-((n*(n-2))+4);
        cout<<"Case "<<cs++<<": "<<area<<endl;
    }
    return 0;
}
