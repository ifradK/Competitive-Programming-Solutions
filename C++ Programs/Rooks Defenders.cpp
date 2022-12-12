#include<iostream>
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<long long, null_type,less<long long>, rb_tree_tag,tree_order_statistics_node_update>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll n,q,t,i,j;
    cin>>n>>q;
    ordered_set s1,s2;
    ll a_x[n+1]={0},a_y[n+1]={0};
    while(q--)
    {
        cin>>t;
        ll x1,x2,y1,y2;
        if(t==1)
        {
            cin>>x1>>y1;
            a_x[x1]++;
            a_y[y1]++;
            s1.insert(x1);
            s2.insert(y1);
        }
        else if(t==2)
        {
            cin>>x1>>y1;
            a_x[x1]--;
            a_y[y1]--;
            if(a_x[x1]==0){s1.erase(s1.find(x1));}
            if(a_y[y1]==0){s2.erase(s2.find(y1));}
        }
        else if(t==3)
        {
            cin>>x1>>y1>>x2>>y2;
            bool flag1=false,flag2=false;
            (s1.order_of_key(x2+1)-s1.order_of_key(x1)==x2-x1+1)? flag1=true:flag1=false;
            (s2.order_of_key(y2+1)-s2.order_of_key(y1)==y2-y1+1)? flag2=true:flag2=false;

            cout<<((flag1 || flag2)? "Yes":"No")<<endl;
        }
    }
    return 0;
}
