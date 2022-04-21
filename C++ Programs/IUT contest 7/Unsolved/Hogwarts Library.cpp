#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],sum=0,cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                if(cnt%4==0)
                {
                    cnt=cnt+4;
                }
                else
                {
                    cnt=cnt+(cnt%4)+1;
                }
                i--;
            }
            else if(a[i]<a[i+1])
            {
                diff=a[i+1]-a[i];
                if(diff>30)
                {
                    cnt=cnt+4;
                }
                else
                {
                    if(cnt%4==1)
                    {

                    }

                }
            }
        }
    }
}
