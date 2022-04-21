#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,temp,temp2,cnt,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long a[n][n];
        memset(a,0,sizeof(a));
        temp=k%n;
        temp2=k/n;
        cnt=k;

        if(temp==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<2<<endl;
        }

        long long flag1=0,flag2=0,flag3=0,flag4=0;

        for(i=flag1,j=flag2; i<n && j<n && cnt>0; i++,j++)
        {
            a[i][j]=1;
            cnt--;
        }

        flag2=1;
        flag3=n-1;

        while(1)
        {
            if(cnt<=0)
            {
                break;
            }
            for(i=flag1,j=flag2; i<n && j<n && cnt>0; i++,j++)
            {
                a[i][j]=1;
                cnt--;
            }
            for(i=flag3,j=flag4; i<n && j<n && cnt>0; i++,j++)
            {
                a[i][j]=1;
                cnt--;
            }
            flag2++;
            flag3--;
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
