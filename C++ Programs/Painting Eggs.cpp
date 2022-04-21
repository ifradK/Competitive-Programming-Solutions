#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,a,g,sum1=0,sum2=0;
    multiset<pair<long long, long long>> s1,s2,s3,s4;
    bool flag1=false, flag2=false, flag3=false, flag4=false;
    cin>>n;
    vector<char> v(n);
    for(i=0; i<n; i++)
    {
        cin>>a>>g;
        s1.insert(make_pair(a,i));
        s2.insert(make_pair(g,i));
        s3.insert(make_pair(a,i));
        s4.insert(make_pair(g,i));
    }


    for(i=0; i<n; i++)
    {
        auto it1=s1.end(), it2=s2.end();
        it1--;
        it2--;
        if(sum1==sum2)
        {
            if(it1->first > it2->first)
            {
                sum2=sum2 + it2->first;
                auto it=s1.find({1000 - it2->first, it2->second});
                v[it2->second]='G';
                s1.erase(it);
                s2.erase(it2);
            }
            else
            {
                sum1=sum1 + it1->first;
                auto it=s2.find({1000 - it1->first, it1->second});
                v[it1->second]='A';
                s2.erase(it);
                s1.erase(it1);
            }
        }
        else if(sum1<sum2)
        {
            sum2=sum2 + it2->first;
            auto it=s1.find({1000 - it2->first, it2->second});
            v[it2->second]='G';
            s1.erase(it);
            s2.erase(it2);
        }
        else
        {
            sum1=sum1 + it1->first;
            auto it=s2.find({1000 - it1->first, it1->second});
            v[it1->second]='A';
            s2.erase(it);
            s1.erase(it1);
        }
    }
    if(abs(sum1-sum2)>500)
    {
        flag1=true;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            cout<<v[i];
        }
        return 0;
    }



    sum1=0;
    sum2=0;
    for(i=0; i<n; i++)
    {
        auto it1=s3.end(), it2=s4.end();
        it1--;
        it2--;
        if(sum1==sum2)
        {
            if(it1->first < it2->first)
            {
                sum2=sum2 + it2->first;
                auto it=s3.find({1000 - it2->first, it2->second});
                v[it2->second]='G';
                s3.erase(it);
                s4.erase(it2);
            }
            else
            {
                sum1=sum1 + it1->first;
                auto it=s4.find({1000 - it1->first, it1->second});
                v[it1->second]='A';
                s4.erase(it);
                s3.erase(it1);
            }
        }
        else if(sum1>sum2)
        {
            sum2=sum2 + it2->first;
            auto it=s3.find({1000 - it2->first, it2->second});
            v[it2->second]='G';
            s3.erase(it);
            s4.erase(it2);
        }
        else
        {
            sum1=sum1 + it1->first;
            auto it=s4.find({1000 - it1->first, it1->second});
            v[it1->second]='A';
            s4.erase(it);
            s3.erase(it1);
        }
    }
    if(abs(sum1-sum2)>500)
    {
        flag2=true;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            cout<<v[i];
        }
        return 0;
    }

    cout<<-1;

    return 0;
}
