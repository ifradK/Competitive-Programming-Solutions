#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<0){cnt++;}
        }
        ll temp=cnt;
        for(i=0; i<n; i++)
        {
            if(cnt==0){break;}
            if(a[i]>0)
            {
                a[i]=-1*a[i];
            }
            cnt--;
        }
        for(i=temp;i<n;i++){a[i]=abs(a[i]);}
        cout<< (is_sorted(a,a+n)? "YES" : "NO") <<endl;
    }
    return 0;
}
