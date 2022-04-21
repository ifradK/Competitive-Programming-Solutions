#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],num,temp,temp1,temp2;
        bool flag1=false, flag2=false;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        num=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<=num)
            {
                num=a[i];
                temp=i;
            }
            else
            {
                break;
            }
        }
        for(i=temp+1;i<n;i++)
        {
            if(a[i]>num)
            {
                num=a[i];
                temp1=i;
                flag1=true;
            }
            else
            {
                break;
            }
        }
        for(i=temp1+1;i<n;i++)
        {
            if(a[i]<num)
            {
                flag2=true;
                temp2=i;
                break;
            }
        }

        if(flag1==true && flag2==true)
        {
            cout<<"YES"<<endl;
            cout<<temp+1<<" "<<temp1+1<<" "<<temp2+1<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
