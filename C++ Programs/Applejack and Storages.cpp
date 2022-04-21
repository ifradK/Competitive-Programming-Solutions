#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,q,i,x,val,rem;
    char ch;
    cin>>n;
    long long a[100003];
    set<pair<long long, long long>> st;
    memset(a,0,sizeof(a));
    for(i=0; i<n; i++)
    {
        cin>>val;
        a[val]++;
    }
    for(i=0; i<100003; i++)
    {
        if(a[i]>0)
        {
            st.insert(make_pair(a[i],i));
        }
    }
    cin>>q;
    while(q--)
    {
        bool flag=false,flag1=false;
        cin>>ch;
        cin>>x;
        if(ch=='+')
        {
            auto it=st.find(pair<long long, long long>(a[x],x));
            if(it==st.end())
            {
                a[x]++;
                st.insert(make_pair(a[x],x));
            }
            else
            {
                st.erase(it);
                a[x]++;
                st.insert(make_pair(a[x],x));
            }
            auto it_i=st.end();
            it_i--;
            auto it_ii=it_i;
            it_ii--;
            auto it_iii=it_ii;
            it_iii--;
            if((it_i->first)>=4)
            {
                flag=true;
                rem=(it_i->first)-4;
                if(rem>=4)
                {
                    flag1=true;
                }
                else if(rem>=2 && (it_ii->first)>=2 && st.size()>1)
                {
                    flag1=true;
                }
                else if((it_ii->first)>=4 && st.size()>1)
                {
                    flag1=true;
                }
                else if((it_ii->first)>=2 && (it_iii->first)>=2 && st.size()>2)
                {
                    flag1=true;
                }
            }
        }
        else if(ch=='-')
        {
            auto it=st.find(pair<long long, long long>(a[x],x));
            st.erase(it);
            a[x]--;
            if(a[x]!=0)
            {
                st.insert(make_pair(a[x],x));
            }
            if(st.size()!=0)
            {
                auto it_i=st.end();
                it_i--;
                auto it_ii=it_i;
                it_ii--;
                auto it_iii=it_ii;
                it_iii--;
                if((it_i->first)>=4)
                {
                    flag=true;
                    rem=(it_i->first)-4;
                    if(rem>=4)
                    {
                        flag1=true;
                    }
                    else if(rem>=2 && (it_ii->first)>=2 && st.size()>1)
                    {
                        flag1=true;
                    }
                    else if((it_ii->first)>=4 && st.size()>1)
                    {
                        flag1=true;
                    }
                    else if((it_ii->first)>=2 && (it_iii->first)>=2 && st.size()>2)
                    {
                        flag1=true;
                    }
                }
            }
        }

        if(flag==true && flag1==true)
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
