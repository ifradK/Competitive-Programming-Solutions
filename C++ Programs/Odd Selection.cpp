#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,x,i;
    cin>>t;
    while(t--)
    {
        long long even=0,odd=0;
        cin>>n>>x;
        long long a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==0)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(x==1)
        {
            if(odd>0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            continue;
        }
        odd--;
        if(even==0)
        {
            if((x-1)%2==0 && x<=odd+1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            continue;
        }
        long long temp=odd/2;
        if(temp*2+even+1>=x)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}


