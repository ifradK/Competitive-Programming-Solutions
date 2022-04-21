#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,temp,range;
    cin>>t;
    while(t--)
    {
        priority_queue<pair<pair<long long, long long>,long long>> st;
        vector<long long> v;
        cin>>n;
        long long a[n+1],i=0,cnt=0;
        st.push({{n-1, -1}, n});
        while(!st.empty())
        {
            i++;
            pair<pair<long long, long long>,long long> p;
            p=st.top();
            st.pop();
            //cout<<"VALUES "<<-1*p.first.second<<" "<<p.second<<endl;
            range=p.second-((-1)*p.first.second)+1;
            if(range==1)
            {
                v.push_back(((-1)*p.first.second));
                cnt++;
                continue;
            }

            if(range%2==0)
            {
                a[(p.second+((-1)*p.first.second)-1)/2]=i;
            }
            else
            {
                a[(p.second+((-1)*p.first.second))/2]=i;
            }

            if(range%2==1)
            {
                temp=(p.second+((-1)*p.first.second))/2;
                long long diff1=(temp-1)-((-1)*p.first.second);
                long long diff2=p.second-(temp+1);
                st.push({{diff1,-((-1)*p.first.second)},(temp-1)});
                st.push({{diff2,-(temp+1)},p.second});
            }
            else
            {
                if(range==2)
                {
                    temp=(p.second+((-1)*p.first.second)-1)/2;
                    st.push({{0,-(temp+1)},(temp+1)});
                }
                else
                {
                    temp=(p.second+((-1)*p.first.second)-1)/2;
                    long long diff3=p.second-(temp+1);
                    long long diff4=(temp-1)-((-1)*p.first.second);
                    st.push({{diff3,-(temp+1)},p.second});
                    st.push({{diff4,-((-1)*p.first.second)},(temp-1)});
                }
            }
        }
        j=i-cnt;
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            j++;
            a[v[i]]=j;
        }
        for(i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}




// THIS IS ALSO THE CORRECT SOLUTION USING THE COMPARATOR FUNCTION

/*struct cmp
{
    bool operator()(const pair<long long,long long>&a,const pair<long long,long long>&b)
    {
        if(a.second-a.first>b.second-b.first)
        {
            return false;
        }
        else if(a.second-a.first==b.second-b.first)
        {
            if(a.first<b.first)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    fastio;
    long long t,n,i,j,temp,range;
    cin>>t;
    while(t--)
    {
        priority_queue<pair<long long,long long>,vector<pair<long long ,long long> > ,cmp>st;
        vector<long long> v;
        cin>>n;
        long long a[n+1],i=0,cnt=0;
        st.push(make_pair(1,n));
        while(!st.empty())
        {
            i++;
            pair<long long,long long> p;
            p=st.top();
            st.pop();
            //cout<<"VALUES "<<p.first<<" "<<p.second<<endl;
            range=p.second-p.first+1;
            if(range==1)
            {
                v.push_back(p.first);
                cnt++;
                continue;
            }

            if(range%2==0)
            {
                a[(p.second+p.first-1)/2]=i;
            }
            else
            {
                a[(p.second+p.first)/2]=i;
            }

            if(range%2==1)
            {
                temp=(p.second+p.first)/2;
                st.push(make_pair(p.first,temp-1));
                st.push(make_pair(temp+1,p.second));
            }
            else
            {
                if(range==2)
                {
                    temp=(p.second+p.first-1)/2;
                    st.push(make_pair(temp+1,temp+1));
                }
                else
                {
                    temp=(p.second+p.first-1)/2;
                    st.push(make_pair(temp+1,p.second));
                    st.push(make_pair(p.first,temp-1));
                }
            }
        }
        j=i-cnt;
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            j++;
            a[v[i]]=j;
        }
        for(i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}*/
