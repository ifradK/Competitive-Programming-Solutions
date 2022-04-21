#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t,j;
    long long n,sum,i,neg=0;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        neg=0;
        sum=(n*(n+1))/2;
        for(i=0; ;i++)
        {
            if(pow(2,i)>n)
            {
                break;
            }
            neg=neg-pow(2,i);
            sum=sum-pow(2,i);
        }
        cout<<sum+neg<<endl;
    }
    return 0;
}
