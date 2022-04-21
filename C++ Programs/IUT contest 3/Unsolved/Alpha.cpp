#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,w,x,y,i,j,diff,cs=0,cnt,cnt1,ans,flag,temp=0,flag1,sum=0;
    cin>>t;
    while(t--)
    {
        temp=0;
        cs++;
        cin>>n>>w;
        long long a[n];
        for(i=0; i<n; i++)
        {
            cin>>x>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                temp++;
                a[i]=-10000000000000;
            }
        }
        long long b[n-temp];
        for(i=0,j=0; i<n; i++)
        {
            if(a[i]>=-1000000000000)
            {
                b[j]=a[i];
                j++;
            }
        }

        n=n-temp;
        cnt=0;
        ans=0;

        for(i=0; i<n-1; )
        {
            flag=0;
            sum=1;
            for(j=i+1; j<n; j++)
            {
                if(a[j]-a[i]<=w)
                {
                    flag=1;
                    sum++;
                }
                else
                {
                    break;
                }
            }
            if(flag==1)
            {
                cnt++;
                ans=ans+sum;
            }

            i=j;

        }

        cout<<"Case "<<cs<<": "<<n-ans+cnt<<endl;

    }
    return 0;
}
