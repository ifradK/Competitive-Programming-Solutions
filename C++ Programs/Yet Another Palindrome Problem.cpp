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
        for(i=0;i<n-2;i++)
        {
            for(j=i+2;j<n;j++)
            {
                if(a[i]==a[j] && j-i>1)
                {
                    cout<<"YES"<<endl;
                    p=1;
                    break;
                }
            }
            if(p==1)
            {
                break;
            }
        }
        if(p==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}




