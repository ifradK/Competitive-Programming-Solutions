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
        long long a[n];
        stack<long long> st;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        st.push(a[0]);
        for(i=1;i<n; )
        {
            if(st.top()<a[i])
            {
                if(st.size()==1)
                {
                    i++;
                }
                else if(st.size()>1)
                {
                    st.pop();
                }
            }
            else
            {
                st.push(a[i]);
                i++;
            }
        }
        if(st.size()==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
