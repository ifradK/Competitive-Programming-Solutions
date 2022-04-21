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
        bool flag=false;
        long long a[n],b[n],temp,val;
        set<long long> st;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i%n]<0)
            {
                temp=n-(abs(a[i%n])%n);
                val=(i%n+temp)%n;
            }
            else
            {
                val=(i+a[i%n])%n;
            }
            if(st.find(val)!=st.end())
            {
                flag=true;
                break;
            }
            else
            {
                st.insert(val);
            }
        }
        if(flag==false)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        st.clear();
    }
    return 0;
}
