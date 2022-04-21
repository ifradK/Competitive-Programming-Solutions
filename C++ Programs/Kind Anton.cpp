#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        int flag=0,flag2=0,flag3=0;
        cin>>n;
        long long a[n],b[n],positive=INT_MAX,negative=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0 && flag2==0)
            {
                positive=i;
                flag2=1;
            }
            else if(a[i]<0 && flag3==0)
            {
                negative=i;
                flag3=1;
            }
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=1;i<n;i++)
        {
            if(a[i]<b[i])
            {
                if(positive>=i)
                {
                    flag=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else if(a[i]>b[i])
            {
                if(negative>=i)
                {
                    flag=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(a[0]!=b[0] && flag==0)
        {
            cout<<"NO"<<endl;
        }
        else if(flag==0)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
