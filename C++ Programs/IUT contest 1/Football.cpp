#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,g,i,s,r,point=0,diff;
    vector<long long> v;
    cin>>n>>g;
    for(i=0; i<n; i++)
    {
        cin>>s>>r;
        v.push_back(r-s);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(v[i]<0)
        {
            point+=3;
        }
        else if(v[i]==0)
        {
            if(g==0)
            {
                point+=1;
            }
            else
            {
                point+=3;
                g--;
            }
        }
        else if(v[i]>0)
        {
            if(g>v[i])
            {
                point+=3;
                g=g-v[i]-1;
            }
            else if(g==v[i])
            {
                point+=1;
                g=0;
            }
        }
    }
    cout<<point;
    return 0;
}




