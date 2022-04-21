#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(abs(a[i]-a[j])%2!=0)
                    {
                        p=1;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                if(p==1)
                {
                    break;
                }
            }
            if(p!=1)
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
