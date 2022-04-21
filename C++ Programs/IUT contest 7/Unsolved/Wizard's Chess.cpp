#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i;
    long double x,y;
    long double angle;
    cin>>n;
    pair< pair< long double, long double>, long long> p[n];
    pair<long double, pair<long double, long double>> p1[n];
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        p[i].first.first=x;
        p[i].first.second=y;
        p[i].second=i+1;
    }
    sort(p,p+n);
    for(i=0;i<n;i++)
    {
        cout<<p[i].first.first<<" "<<p[i].first.second<<" "<<p[i].second<<endl;
    }
//    for(i=0;i<n;i++)
//    {
//        p1[i].second=p[i].second;
//    }
    for(i=0;i<n-1;i++)
    {
        if(p[i].first.first==0)
        {
            angle=abs(90-atan(p[i+1].first.second/p[i+1].first.first));
        }
        else if(p[i+1].first.first==0)
        {
            angle=abs(atan(p[i].first.second/p[i].first.first)-90);
        }
        else
        {
            angle=abs(atan(p[i].first.second/p[i].first.first)-atan(p[i+1].first.second/p[i+1].first.first));
        }
        p1[i].first=angle;
        p1[i].second.first=p[i].second;
        p1[i].second.second=p[i+1].second;
        cout<<p[i].second<<" "<<p[i+1].second<<" "<<angle<<endl;
    }
    p1[i].first=INT_MAX;
    p1[i].second.first=INT_MAX;
    p1[i].second.second=INT_MAX;
    sort(p1,p1+n);
//    for(i=0;i<n;i++)
//    {
//        cout<<p1[i].second.first<<" "<<p1[i].second.second<<endl;
//    }
    cout<<p1[0].second.first<<" "<<p1[0].second.second;
    return 0;
}


//for(i=0;i<n;i++)
//    {
//        cout<<p[i].first.first<<" "<<p[i].first.second<<" "<<p[i].second<<endl;
//    }


/*
10
8 6
-7 -3
9 8
7 10
-3 -8
3 7
6 -8
-9 8
9 2
6 7
*/
