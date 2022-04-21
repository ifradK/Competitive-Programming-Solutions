#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,T,diff;
    cin>>t;
    while(t--)
    {
        cin>>n>>T;
        long long a[n],b[n],cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if((double)a[i]<(double)T/2)
            {
                b[i]=0;
            }
            else if((double)a[i]==(double)T/2)
            {
                cnt++;
                if(cnt%2==0)
                {
                    b[i]=0;
                }
                else
                {
                    b[i]=1;
                }
            }
            else
            {
                b[i]=1;
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



/*#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,T,diff;
    cin>>t;
    while(t--)
    {
        cin>>n>>T;
        long long a[n],b[n];
        multimap<long long, long long> mp;
        map<long long, long long> mp1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mp.insert(pair <long long, long long> (a[i], i));
            mp1[a[i]]++;
        }
        for(i=0; i<n; i++)
        {
            if(a[i]>=0)
            {
                b[i]=0;
                if(T<=a[i])
                {
                    mp1[a[i]]--;
                    a[i]=-1;
                }
                else
                {
                    diff=T-a[i];
                    mp1[a[i]]--;
                    if((double)diff==(double)T/2 && mp1[diff]>0)
                    {
                        mp1[diff]--;
                        auto it=mp.find(diff);
                        b[it->second]=1;
                        mp.erase(it);
                        a[it->second]=-1;
                    }
                    else if(mp1[diff]>0)
                    {
                        while(mp1[diff]>0)
                        {
                            mp1[diff]--;
                            auto it=mp.find(diff);
                            b[it->second]=1;
                            mp.erase(it);
                            a[it->second]=-1;
                        }
                    }
                }
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

