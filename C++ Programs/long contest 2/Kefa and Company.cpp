#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,d,i,j,sum=0,mx=INT_MIN;
    cin>>n>>d;
    long long m[n+1]={0},s[n+1]={0};
    pair<long long, long long> p[n+1];
    p[0].first=p[0].second=INT_MIN;
    for(i=1;i<=n;i++)
    {
        cin>>m[i]>>s[i];
        p[i].first=m[i];
        p[i].second=-s[i];
    }
    sort(p,p+n+1);
    p[0].first=p[0].second=0;
    for(i=0;i<=n;i++)
    {
        p[i].second=p[i].second*(-1);
    }
//    for(i=0;i<=n;i++)
//    {
//        cout<<p[i].first<<" "<<p[i].second<<endl;
//    }
    for(i=1,j=1;i<=n; )
    {
        if(p[i].first-p[j].first<d || i==j)
        {
            sum=sum+p[i].second;
            i++;
            mx=max(mx,sum);
        }
        else if(p[i].first-p[j].first>=d)
        {
            sum=sum-p[j].second;
            j++;
        }
    }
    cout<<mx;
    return 0;
}

