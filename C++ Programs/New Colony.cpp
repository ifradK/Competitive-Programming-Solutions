#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll h[n];
        for(i=0;i<n;i++)
        {
            cin>>h[i];
        }
        i=0;
        bool flag=false;
        while(k!=0)
        {
            if(i+1==n)
            {
                flag=true;
                break;
            }
            else if(h[i]>=h[i+1])
            {
                i++;
                k++;
            }
            else
            {
                k=k-1;
                if(k<=0)
                {
                    break;
                }
                k++;
                h[i]++;
                i=0;
            }
            k--;
        }
        if(flag==true)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<i+1<<endl;
        }
    }
    return 0;
}
