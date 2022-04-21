#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
pair<long long, long long> temp[205000];
int main()
{
    fastio;
    long long n,q,i,j,cnt=0;
    cin>>n>>q;
    long long a[n],b[n+1]={0},l[q],r[q],sum=0,total=0;
    pair<long long, long long> range[n+3];
    stack<pair<char, long long>> st;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        range[i].first=0;
        range[i].second=i;
    }
    range[n].first=0;
    range[n].second=n;
    for(i=0; i<q; i++)
    {
        cin>>l[i]>>r[i];
        temp[l[i]].first++;
        temp[r[i]].second++;
    }

    for(i=n; i>0; i--)
    {
        for(j=0; j<temp[i].second; j++)
        {
            st.push(make_pair('e',i));
        }
        for(j=0; j<temp[i].first; j++)
        {
            st.push(make_pair('s',i));
        }
    }
    while(!st.empty())
    {
        if(st.top().first=='s')
        {
            long long temp;
            pair<char, long long> p=st.top();
            st.pop();
            cnt++;
            if(range[p.second].first<cnt)
            {
                range[p.second].first=cnt;
            }
            if(st.size()==0)
            {
                temp=n+1;
            }
            else
            {
                temp=st.top().second;
            }
            for(i=p.second+1; i<temp; i++)
            {
                if(range[i].first<cnt)
                {
                    range[i].first=cnt;
                }
            }
        }
        else
        {
            long long temp;
            pair<char, long long> p=st.top();
            st.pop();
            if(range[p.second].first<cnt)
            {
                range[p.second].first=cnt;
            }
            if(st.size()==0)
            {
                temp=n+1;
            }
            else
            {
                temp=st.top().second;
            }
            cnt--;
            for(i=p.second+1; i<temp; i++)
            {
                if(range[i].first<cnt)
                {
                    range[i].first=cnt;
                }
            }
        }
    }

    sort(a,a+n,greater<long long>());
    sort(range,range+n+1,greater<pair<long long, long long>>());

    for(i=0;i<n;i++)
    {
        b[range[i].second]=a[i];
    }
    b[0]=0;

    for(i=1;i<=n;i++)
    {
        sum=sum+b[i];
        b[i]=sum;
    }

    for(i=0; i<q; i++)
    {
        total=total+b[r[i]]-b[l[i]-1];
    }
    cout<<total;
    return 0;
}
