#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,w,h,n;
    cin>>t;
    while(t--)
    {
        long long cnt=1;
        cin>>w>>h>>n;
        while(w%2==0)
        {
            w=w/2;
            cnt=cnt*2;
        }
        while(h%2==0)
        {
            h=h/2;
            cnt=cnt*2;
        }
        if(cnt>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
