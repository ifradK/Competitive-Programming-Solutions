#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long s,x,cnt=0;
    cin>>s>>x;
    while(1)
    {
        if(s<=0)
        {
            break;
        }
        s=s/x;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
