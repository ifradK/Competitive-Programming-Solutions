#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long t,n,m,cnt=0,i,j,p,q,evx,evy,odx,ody;
    cin>>t;
    while(t--)
    {
        evx=0;
        evy=0;
        odx=0;
        ody=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>p;
            if(p%2==0)
            {
                evx++;
            }
            else
            {
                odx++;
            }
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>q;
            if(q%2==0)
            {
                evy++;
            }
            else
            {
                ody++;
            }
        }
        cout<<odx*ody+evx*evy<<endl;
    }
    return 0;
}
