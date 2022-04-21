#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    list<long long> mylist1,mylist2;
    long long i,n,k1,k2,cnt=0,val;
    cin>>n;
    cin>>k1;
    for(i=0;i<k1;i++)
    {
        cin>>val;
        mylist1.push_back(val);
    }
    cin>>k2;
    for(i=0;i<k2;i++)
    {
        cin>>val;
        mylist2.push_back(val);
    }
    while(1)
    {
        if(mylist1.empty())
        {
            cout<<cnt<<" "<<2;
            return 0;
        }
        if(mylist2.empty())
        {
            cout<<cnt<<" "<<1;
            return 0;
        }
        if(cnt>1000)
        {
            cout<<-1;
            return 0;
        }
        if(mylist1.front()>mylist2.front())
        {
            mylist1.push_back(mylist2.front());
            mylist1.push_back(mylist1.front());
            mylist1.pop_front();
            mylist2.pop_front();
        }
        else if(mylist1.front()<mylist2.front())
        {
            mylist2.push_back(mylist1.front());
            mylist2.push_back(mylist2.front());
            mylist2.pop_front();
            mylist1.pop_front();
        }
        cnt++;
    }
    return 0;
}
