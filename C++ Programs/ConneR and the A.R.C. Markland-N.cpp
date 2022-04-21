#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long t,n,s,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>k;
        long long a[k],b[k];
        for(i=0;i<k;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+k);
        sort(b,b+k);
        if((binary_search(a,a+k,s))==0)
        {
            cout<<0<<endl;
            continue;
        }
        long long start=0,end=k-1,ans1,ans2,middle,mid,mid1,middle1;
        while(start<=end)
        {
            mid=(int)((start+end)/2);
            if(a[mid]==s)
            {
                break;
            }
            else if(a[mid]>s)
            {
                end=mid-1;
            }
            else if(a[mid]<s)
            {
                start=mid+1;
            }
        }
        mid1=mid;
        middle=mid;
        middle1=mid;
        while(1)
        {
            a[mid]=a[mid]-1;
            if(middle<0)
            {
                ans1=INT_MAX;
                break;
            }
            if(a[mid]!=a[middle-1])
            {
                if(a[mid]==0)
                {
                    ans1=INT_MAX;
                }
                else
                {
                    ans1=s-a[mid];
                }
                break;
            }
            middle--;
        }
        while(1)
        {
            b[mid1]=b[mid1]+1;
            if(middle1>=n)
            {
                ans2=INT_MAX;
            }
            if(b[mid1]!=b[middle1+1])
            {
                if(b[mid1]==n+1)
                {
                    ans2=INT_MAX;
                }
                else
                {
                    ans2=b[mid1]-s;
                }
                break;
            }
            middle1++;
        }
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}
