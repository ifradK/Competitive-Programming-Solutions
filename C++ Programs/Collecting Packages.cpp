#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],b[n],i;
        for(i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
        }
        pair<long long,long long> p[n];
        for (int i = 0; i < n; i++)
        {
            p[i].first = a[i];
            p[i].second = b[i];
        }
        sort(p, p + n);
        for (int i = 0; i < n; i++)
        {
            a[i] = p[i].first;
            b[i] = p[i].second;
        }
        list <char> lst;
        list <char>::iterator it;
        long long w=0,diffx,diffy,j,cnt=0,k,currenty=0,currentx=0;
        for(i=0;i<n;i++)
        {
            diffx=a[i]-currentx;
            diffy=b[i]-currenty;
            currentx=a[i];
            currenty=b[i];
            if(diffx<0 || diffy<0)
            {
                w=1;
                cout<<"NO"<<endl;
                break;
            }
            for(j=0;j<diffx;j++)
            {
                lst.push_back('R');
            }
            k=j+1;
            for(j=0;j<diffy;j++)
            {
                lst.push_back('U');
            }
        }
        if(w!=1)
        {
            cout<<"YES"<<endl;
            for(it=lst.begin();it!=lst.end();it++)
            {
                cout<<*it;
            }
            cout<<endl;
        }
    }
    return 0;
}
