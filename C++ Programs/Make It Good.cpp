#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long temp=a[n-1],cnt=1;
        for(i=n-2;i>=0;i--)
        {
            if(a[i]>=temp)
            {
                temp=a[i];
            }
            else
            {
                break;
            }
            cnt++;
        }
        for(j=i;j>=0;j--)
        {
            if(a[j]<=temp)
            {
                temp=a[j];
            }
            else
            {
                break;
            }
            cnt++;
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}
