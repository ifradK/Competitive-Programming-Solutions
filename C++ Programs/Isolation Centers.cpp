#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,q,c;
    string str;
    cin>>t;
    while(t--)
    {
        long long a[27]={0},ans=0,diff,i,j;
        memset(a,0,sizeof(a));
        cin>>n>>q;
        cin>>str;
        for(i=0;i<n;i++)
        {
            a[str[i]-'a'+1]++;
        }
        for(i=0;i<q;i++)
        {
            cin>>c;
            ans=0;
            for(j=1;j<=26;j++)
            {
                diff=a[j]-c;
                if(diff>0)
                {
                    ans=ans+diff;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
