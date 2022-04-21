


//MULTIMAP NIYE JHAMELA HOITESE.....WILL OBVIOUSLY TRY LATER

#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,m,i;
    cin>>t;
    while(t--)
    {
        multimap<ll,pair<ll,ll>> mp_diff2,mp_same;
        cin>>n>>m;
        ll a[n],b[n],c[m];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>c[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                mp_same.insert({a[i],make_pair(b[i],i)});
            }
            else
            {
                mp_diff2.insert({b[i],make_pair(a[i],i)});
            }
        }
//        for(auto it3=mp_diff2.begin();it3!=mp_diff2.end();it3++)
//        {
//            cout<<it3->first<<" "<<it3->second.first<<endl;
//        }
//        cout<<"LL "<<c[m-1]<<endl;
        auto it=mp_diff2.find(c[m-1]);
        auto it4=mp_same.find(c[m-1]);
        if(it==mp_diff2.end() && it4==mp_same.end())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=0; i<m; i++)
            {
                auto it2=mp_diff2.find(c[i]);
                if(it2!=mp_diff2.end())
                {
                    cout<<(it2->second.second)+1<<" ";
                    mp_diff2.erase(it2);
                else
                {
                    cout<<(it->second.second)+1<<" ";
                }
//                for(auto it3=mp_diff2.begin(); it3!=mp_diff2.end(); it3++)
//                {
//                    cout<<it3->first<<" "<<it3->second.first<<endl;
//                }
            }
            cout<<endl;
        }
        mp_same.clear();
        mp_diff2.clear();
    }
    return 0;
}
/*
1
5 2
1 2 2 1 1
1 2 2 1 1
1 2

1
10 5
7 3 2 1 7 9 4 2 7 9
9 9 2 1 4 9 4 2 3 9
9 9 7 4 3
*/
