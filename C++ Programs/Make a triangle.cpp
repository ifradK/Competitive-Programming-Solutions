#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int a[3];
    int i,answer;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a, a+3);
    if(a[2]>(a[0]+a[1]))
    {
        answer=a[2]-(a[0]+a[1])+1;
    }
    else if(a[2]==(a[0]+a[1]))
    {
        answer=1;
    }
    else
    {
        answer=0;
    }
    cout<<answer;
    return 0;
}
