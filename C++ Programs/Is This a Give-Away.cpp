#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    string a;
    long i,j,cnt=0,left,right;
    cin>>a;
    for(i=0,j=a.size()-1; i<a.size(),j>=0; )
    {
        if(i>=j)
        {
            break;
        }
        if(a[i]=='{')
        {
            left=1;
        }
        else
        {
            i++;
        }
        if(a[j]=='}')
        {
            right=1;
        }
        else
        {
            j--;
        }
        if(left==1 && right==1)
        {
            cnt++;
            left=0;
            right=0;
            i++;
            j--;
        }
    }
    cout<<cnt;
    return 0;
}
