#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        long long a[n],mn=INT_MAX,sum=0,val,cnt,temp[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            val=a[i];
            cnt=0;
            while(1)
            {
                if(val%x!=0)
                {
                    break;
                }
                val=val/x;
                cnt++;
            }
            if(mn>cnt)
            {
                mn=cnt;
                j=i;
            }
        }
        for(i=0; i<n; i++)
        {
            k=mn+1;
            temp[i]=1;
            while(k--)
            {
                sum=sum+(a[i]*temp[i]);
                a[i]=a[i]/x;
                temp[i]=temp[i]*x;
            }
        }
        for(i=0; i<j; i++)
        {
            sum=sum+(a[i]*temp[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
