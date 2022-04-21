#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    int t,n,i,j,b[8010]={0},a[8010]={0},ans=0,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        memset(b,0,sizeof(b));
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            //cnt[a[i]]++;
        }
        for(i=0;i<n-1;i++)
        {
            sum=a[i];
            for(j=i+1;j<n;j++)
            {
                sum=sum+a[j];
                if(sum>8000)
                {
                    break;
                }
                else
                {
                    b[sum]=1;
                    //cout<<"AAA "<<sum<<" "<<i<<" "<<j<<endl;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(b[a[i]]==1)
            {
                //cout<<a[i]<<endl;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
