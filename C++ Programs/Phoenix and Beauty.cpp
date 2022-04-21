#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,val,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        bool flag=false,flag1=false;
        long long a[100000],cnt=0,sz=0,pos;
        vector<long long> v[n];
        list<long long> ls;
        set<long long> st;
        for(i=0; i<n; i++)
        {
            cin>>val;
            v[i].push_back(val);
            st.insert(val);
        }
        i=0;
        for(auto it=st.begin(); it!=st.end(); it++)
        {
            a[i]=*it;
            i++;
        }
        if(st.size()>k)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                flag=false;
                flag1=false;
                long long temp=k;
                for(j=0,pos=0; j<temp; )
                {
                    if(pos==st.size())
                    {
                        flag=true;
                        pos--;
                    }
                    if(v[i][j]==a[pos])
                    {
                        flag1=true;
                        temp=k-1;
                        if(flag==true)
                        {
                            v[i].push_back(a[pos]);
                            ls.push_back(a[pos]);
                            j++;
                        }
                        else
                        {
                            ls.push_back(a[pos]);
                            pos++;
                            continue;
                        }
                    }
                    else if(flag1==true)
                    {
                        v[i].push_back(a[pos]);
                        ls.push_back(a[pos]);
                        pos++;
                        j++;
                    }
                    else if(flag1==false)
                    {
                        v[i].insert(v[i].begin(),a[pos]);
                        ls.push_back(a[pos]);
                        pos++;
                        j++;
                    }
                }
            }
        }
        cout<<n*k<<endl;
        for(auto it=ls.begin();it!=ls.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
        st.clear();
        ls.clear();
    }
    return 0;
}
