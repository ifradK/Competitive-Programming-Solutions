#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,j,len,cnt=0;
    string a;
    cin>>a;
    len=a.size();
    if(len%2==0)
    {
        for(i=0,j=len-1; i<len/2,j>(len/2)-1; i++,j--)
        {
            if(a[i]!=a[j])
            {
                cnt++;
            }
            if(cnt>1)
            {
                break;
            }
        }
    }
    else
    {
        for(i=0,j=len-1; i<(len+1)/2,j>((len+1)/2)-2; i++,j--)
        {
            if(a[i]!=a[j])
            {
                cnt++;
            }
            if(cnt>1)
            {
                break;
            }
        }
        if(cnt==0)
        {
            cnt=1;
        }
    }
    if(cnt==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
