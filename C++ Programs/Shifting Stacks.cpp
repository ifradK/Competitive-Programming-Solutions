#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
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
        ll cnt=0,h;
        bool flag=false;
        for(i=0; i<n; i++)
        {
            cin>>h;
            cnt=cnt+h;
            if(i*(i+1)/2>cnt)
            {
                flag=true;
            }
        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}










/*#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
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
        ll h[n],cnt=0;
        bool flag=false;
        for(i=0; i<n; i++)
        {
            cin>>h[i];
        }
        for(i=0; i<n-1; i++)
        {
            if(h[i]>0)
            {
                h[i+1]=h[i+1]+h[i]-cnt;
                h[i]=cnt;
            }
            cnt++;
        }
        for(i=0; i<n; i++)
        {
            cout<<h[i]<<" ";
        }
        cout<<endl;
        for(i=1; i<n; i++)
        {
            if(h[i]<=h[i-1])
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}*/
