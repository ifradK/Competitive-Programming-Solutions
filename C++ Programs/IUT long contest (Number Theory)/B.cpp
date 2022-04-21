#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,cs=1,temp,cnt,k,j;
    cin>>t;
    while(t--)
    {
        long long a[103]= {0};
        int mx=INT_MIN;
        memset(a,0,sizeof(a));
        cin>>n;
        for(i=n; i>=1; i--)
        {
            temp=i;
            for(j=2; ; j++)
            {
                cnt=0;
                if(temp==1)
                {
                    break;
                }
                while(1)
                {
                    if(temp%j==0)
                    {
                        cnt++;
                        temp=temp/j;
                        if(mx<j)
                        {
                            mx=j;
                        }
                    }
                    else
                    {
                        a[j]=a[j]+cnt;
                        break;
                    }
                }
            }
        }
        cout<<"Case "<<cs++<<": "<<n<<" = ";
        for(j=2; j<=100; j++)
        {
            if(a[j]!=0)
            {
                cout<<j<<" ("<<a[j]<<")";
                if(j!=mx)
                {
                    cout<<" * ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
