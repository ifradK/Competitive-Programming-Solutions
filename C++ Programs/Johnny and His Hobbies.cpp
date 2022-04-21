#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,cnt,temp,i,val,temp2;
    cin>>t;
    while(t--)
    {
        cnt=0;
        bool flag=false;
        set<long long> st;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>val;
            st.insert(val);
        }
        auto it=st.begin();
        for(i=1;i<1500;i++)
        {
            flag=false;
            cnt=0;
            temp=i^(*it);

            if(st.find(temp)!=st.end())
            {
                for(auto it2=st.begin();it2!=st.end();it2++)
                {
                    temp2=i^(*it2);
                    if(st.find(temp2)!=st.end())
                    {
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            if(cnt==n)
            {
                flag=true;
                cout<<i<<endl;
                break;
            }
        }
        if(flag==false)
        {
            cout<<-1<<endl;
        }
        st.clear();
    }
    return 0;
}
/*
1
4
1 0 2 3
*/
