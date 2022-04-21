#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long t,n,k,i,j,z,cnt,remain,min,remain2;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        remain=k;
        cnt=0;
        long a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        min=INT_MAX;
        for(z=0; z<n; z++)
        {
            cnt=0;
            min=INT_MAX;
            if(remain+z+1<=n-1)
            {
                for(i=z; i<remain+1+z; i++)
                {
                    if(a[i]<min)
                    {
                        min=a[i];
                        remain2=remain-i;
                        cnt=i;
                    }
                }
            }
            else
            {
                for(i=z; i<n; i++)
                {
                    if(a[i]<min)
                    {
                        min=a[i];
                        remain2=remain-i;
                        cnt=i;
                    }
                }
            }
            for(j=cnt; j>z; j--)
            {
                swap(a[j],a[j-1]);
                remain--;
                if(remain<=0)
                {
                    break;
                }
            }
            if(remain<=0)
            {
                break;
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

