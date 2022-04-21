#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

bool doOverlap(long long x1, long long x2, long long x3, long long x4, long long y1, long long y2, long long y3, long long y4)
{
    if (x1 > x4 || x3 > x2)
        return false;

    if (y1 < y4 || y3 < y2)
        return false;

    return true;
}

int main()
{
    fastio;
    long long n,t,cs=0,i,flag;
    cin>>t;
    while(t--)
    {
        flag=0;
        cs++;
        cin>>n;
        long long x1[n],x2[n],y1[n],y2[n],area,area1,a,b,c,d;
        for(i=0; i<n; i++)
        {
            cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        }
        if(n==1)
        {
            area=abs(x2[0]-x1[0])*abs(y2[0]-y1[0]);
            cout<<"Case "<<cs<<": "<<area<<endl;
            continue;
        }
        for(i=0; i<n-1; i++)
        {
            if(doOverlap(x1[i],x2[i],x1[i+1],x2[i+1],y1[i],y2[i],y1[i+1],y2[i+1])==false)
            {
                flag=1;
                cout<<"Case "<<cs<<": "<<0<<endl;
                break;
            }
            a=max(x1[i],x1[i+1]);
            b=max(y1[i],y1[i+1]);
            c=min(x2[i],x2[i+1]);
            d=min(y2[i],y2[i+1]);
        }
        if(flag!=1)
        {
            area1=abs(c-a)*abs(d-b);
            cout<<"Case "<<cs<<": "<<area1<<endl;
        }
    }
    return 0;
}
/*
3
16 27 66 58
1 25 89 67
23 29 40 39

2
12 20 99 75
59 14 90 33

2
8 20 82 83
10 21 87 24
*/
