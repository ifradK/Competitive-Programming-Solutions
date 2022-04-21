#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,test,i,x;
    cin>>test;
    while(test--)
    {
        cin>>n>>x;
        long long a[n],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }

        long long cnt1=n,cnt2=n,sum2=sum;
        bool flag=false;

        for(i=0;i<n;i++)
        {
            if(sum%x!=0)
            {
                flag=true;
                break;
            }
            else
            {
                cnt1--;
                sum=sum-a[i];
            }
        }

        for(i=n-1;i>=0;i--)
        {
            if(sum2%x!=0)
            {
                flag=true;
                break;
            }
            else
            {
                cnt2--;
                sum2=sum2-a[i];
            }
        }

        if(flag==true)
        {
            cout<<max(cnt1,cnt2)<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
