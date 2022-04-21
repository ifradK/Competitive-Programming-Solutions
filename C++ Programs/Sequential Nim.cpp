#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            if(n%2==0)
            {
                cout<<"Second"<<endl;
            }
            else
            {
                cout<<"First"<<endl;
            }
        }
        else
        {
            cnt=0;
            for(i=0;i<n;i++)
            {
                if(a[i]!=1)
                {
                    break;
                }
                cnt++;
            }
            if(cnt%2==0)
            {
                cout<<"First"<<endl;
            }
            else
            {
                cout<<"Second"<<endl;
            }
        }
    }
    return 0;
}
