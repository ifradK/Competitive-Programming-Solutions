#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,p1,p2,p3,t1,t2,sum=0,ans=0,i,diff;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    long a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        sum=sum+(b[i]-a[i]);
    }
    ans=ans+sum*p1;
    for(i=0;i<n-1;i++)
    {
        diff=a[i+1]-b[i];
        if(diff>=t1)
        {
            diff=diff-t1;
            ans=ans+(t1*p1);
            if(diff>=t2)
            {
                diff=diff-t2;
                ans=ans+(t2*p2);
                ans=ans+(diff*p3);
            }
            else
            {
                ans=ans+(diff*p2);
                diff=0;
            }
        }
        else
        {
            ans=ans+(diff*p1);
            diff=0;
        }
    }
    cout<<ans;
    return 0;
}
