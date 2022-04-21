#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,even,odd;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool flag=false;
        even=0;
        odd=0;
        long long a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd%2==0 && even%2==0)
        {
            cout<<"YES"<<endl;
            flag=true;
        }
        else
        {
            sort(a,a+n);
            for(i=0; i<n-1; i++)
            {
                if(a[i+1]-a[i]==1)
                {
                    even--;
                    odd--;
                }
                if(odd%2==0 && even%2==0)
                {
                    cout<<"YES"<<endl;
                    flag=true;
                    break;
                }
            }
        }
        if(flag==false)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
