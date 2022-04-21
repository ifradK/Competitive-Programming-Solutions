#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

//TLE in test 9.

int main()
{
    fastio;
    long long n,m,k,cnt=0,pos,ans=0,i,j;
    cin>>n>>m>>k;
    pos=k;
    long long a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m; )
    {
        cnt=0;
        for(j=i;j<m;j++)
        {
            if(a[j]<=pos)
            {
                cnt++;
            }
            else
            {
                if(cnt==0)
                {
                    pos=pos+k;            // I am increasing the pos by k everytime the cnt is 0. But it is not efficient for large values
                    j--;                  // what i have to do is increase the position with respect to the a[j] (special values).
                }                         // Couldn't get any idea for this implementation
                else
                {
                    pos=pos+cnt;
                    break;
                }
            }
        }
        i=j;
        ans++;
    }
    cout<<ans;
    return 0;
}
/*
1000000000000000000 2 1
1 1000000000000000000
*/
