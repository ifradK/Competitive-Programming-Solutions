#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long i,t,n,k,a,cnt=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cnt=0;
        cin>>n>>k;
        while(n!=0)
        {
            if(n%k==0)
            {
                n=n/k;
                cnt++;
            }
            else
            {
                a=n%k;
                cnt=cnt+a;
                n=n-a;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
