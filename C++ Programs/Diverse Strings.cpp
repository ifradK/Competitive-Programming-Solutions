#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,len,p=0,q=0;
    string a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        p=0;
        q=0;
        cin>>a;
        sort(a.begin(),a.end());
        for(j=0; j<a.size(); j++)
        {
            if(a[j]==a[j+1])
            {
                q=1;
                cout<<"No"<<endl;
                break;
            }
        }
        if(q==0)
        {
            for(j=0; j<a.size()-1; j++)
            {
                if(((int)a[j])+1!=((int)a[j+1]))
                {
                    p=1;
                    cout<<"No"<<endl;
                    break;
                }
            }
            if(p==0)
            {
                cout<<"Yes"<<endl;
            }
        }

    }
    return 0;
}
