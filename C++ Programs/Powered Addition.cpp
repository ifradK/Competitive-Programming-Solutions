#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,diff;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        cin>>n;
        long long a[n],b[n],cnt=0,temp;
        cin>>a[0];
        temp=a[0];
        for(i=1; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>temp)
            {
                temp=a[i];
            }
            else if(a[i]<temp)
            {
                flag=true;
                diff=temp-a[i];
                b[cnt]=diff;
                cnt++;
            }
        }
        if(flag==false)
        {
            cout<<0<<endl;
        }
        else
        {
            sort(b,b+cnt);
            for(i=0; ; i++)
            {
                if(pow(2,i)>b[cnt-1])
                {
                    cout<<i<<endl;
                    break;
                }
                else if(pow(2,i)==b[cnt-1])
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
