#include<iostream>
#include <bits/stdc++.h>
#include<string>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
string str[45];
int main()
{
    fastio;
    int i,t,n,k;
    str[0]='a';
    str[1]='b';
    for(i=2;i<45;i++)
    {
        str[i]=str[i-2]+str[i-1];
    }
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<str[n][k-1]<<endl;
    }
    return 0;
}
