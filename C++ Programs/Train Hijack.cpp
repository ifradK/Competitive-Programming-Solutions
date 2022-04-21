#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long t,n,mx=-999,product=1,i,j,Case=1;
    cin>>t;
    while(t--)
    {
        mx=-999;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            product=1;
            for(j=i; j<n; j++)
            {
                product=product*a[j];
                if(product>mx)
                {
                    mx=product;
                }
            }
        }
        cout<<"Case "<<Case<<": "<<mx<<endl;
        Case++;
    }
    return 0;
}


