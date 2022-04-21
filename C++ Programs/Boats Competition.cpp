#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main()
{
    fastio;
    long long t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],b[n],sum[205]= {0},mx=INT_MIN,cnt=0,temp=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(k=2; k<=200; k++)
        {
            cnt=0;
            for(i=0;i<n;i++)
            {
                b[i]=a[i];
            }
            for(i=0; i<n-1; i++)
            {
                if(b[i]==-1)
                {
                    continue;
                }
                for(j=i+1; j<n; j++)
                {
                    if(b[i]+b[j]==k && b[j]!=-1)
                    {
                        cnt++;
                        b[i]=-1;
                        b[j]=-1;
                        break;
                    }
                }
            }
            //if(cnt>0){cout<<"CNT "<<cnt<<" "<<i<<" "<<j<<" "<<k<<endl;}

            mx=max(mx,cnt);
        }

        cout<<mx<<endl;
    }
    return 0;
}
