#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    set<long long> st;
    long long t,n,i,val;
    for(val=2,i=5;val<=1000000000; )
    {
        st.insert(val);
        val=val+i;
        i=i+3;
    }
    cin>>t;
    while(t--)
    {
        bool flag=false;
        long long cnt=0,diff;
        cin>>n;
        while(n>=2)
        {
            auto it=st.lower_bound(n);
            if(*it==n)
            {
                cout<<cnt+1<<endl;
                n=0;
                flag=true;
                break;
            }
            else
            {
                it--;
                diff=n-*it;
                cnt++;
                n=diff;
            }
        }
        if(flag==false)
        {
            cout<<cnt<<endl;
        }
    }
    return 0;
}
