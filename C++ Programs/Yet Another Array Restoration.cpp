#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,x,y,i,sz,temp,diff;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        sz=n;
        temp=n-1;
        diff=y-x;
        while(1)
        {
            if(temp<2)
            {
                break;
            }
            if(diff%temp==0)
            {
                diff=diff/temp;
                break;
            }
            temp--;
        }
        for(i=x; i<=y && sz>0; i=i+diff)
        {
            cout<<i<<" ";
            sz--;
        }
        for(i=x-diff; i>0 && sz>0; i=i-diff)
        {
            cout<<i<<" ";
            sz--;
        }
        for(i=y+diff; sz>0; i=i+diff)
        {
            cout<<i<<" ";
            sz--;
        }
        cout<<endl;
    }
    return 0;
}
