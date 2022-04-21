#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,t;
    cin>>t;
    while(t--)
    {
        long long alice=0,bob=0,total_alice=0,total_bob=0,val;
        list<long long> st;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>val;
            st.push_back(val);
        }
        alice=st.front();
        total_alice=total_alice+alice;
        st.pop_front();
        i=0;
        while(!st.empty())
        {
            i++;
            if(i%2==1)
            {
                while(1)
                {
                    if(st.empty())
                    {
                        break;
                    }
                    if(bob>alice)
                    {
                        alice=0;
                        break;
                    }
                    bob=bob+st.back();
                    st.pop_back();
                }
                total_bob=total_bob+bob;
            }
            else
            {
                while(1)
                {
                    if(st.empty())
                    {
                        break;
                    }
                    if(alice>bob)
                    {
                        bob=0;
                        break;
                    }
                    alice=alice+st.front();
                    st.pop_front();
                }
                total_alice=total_alice+alice;
            }
        }
        cout<<i+1<<" "<<total_alice<<" "<<total_bob<<endl;
    }
    return 0;
}
