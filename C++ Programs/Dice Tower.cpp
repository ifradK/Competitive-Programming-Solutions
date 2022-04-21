#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    int n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int first_bottom=7-x;
    for(int i=1;i<n;i++)
    {
        if(a[i]==first_bottom || 7-a[i]==first_bottom || b[i]==first_bottom || 7-b[i]==first_bottom)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
