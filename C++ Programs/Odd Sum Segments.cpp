#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long q,n,k,i,val;
    cin>>q;
    while(q--)
    {
        vector<long long> odd;
        cin>>n>>k;
        long long a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]%2==1)
            {
                odd.push_back(i);
            }
        }
        if(odd.size()>=k && (odd.size()-k)%2==0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<k-1;i++)
            {
                cout<<odd[i]<<" ";
            }
            cout<<n<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
