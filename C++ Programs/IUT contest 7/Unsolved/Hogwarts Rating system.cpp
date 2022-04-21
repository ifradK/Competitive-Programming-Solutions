#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,sum,sum2,i,flag,diff;
    cin>>n;
    long long a[n],b[n]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b[0]=1;
    flag=0;
    sum=1;
    sum2=1;
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            b[i+1]=1;
        }
        else if(a[i]>a[i+1])
        {
            b[i+1]=0;
        }
        else if(a[i]==a[i+1])
        {
            if(i<=n-3)
            {
                if(a[i+2]<a[i+1])
                {
                    b[i+1]=2;
                }
                else
                {

                }
            }
            else
            {

            }
        }
    }
    for(i=1;i<n;i++)
    {
        if(b[i]==1)
        {
            flag=i;
            sum=sum+sum2+1;
        }
        else if(b[i]==0)
        {
            diff=i-flag+1;
            sum=sum+((diff*(diff+1))/2);
            sum=sum-sum2-1;
        }
    }
    cout<<sum;
    return 0;
}
