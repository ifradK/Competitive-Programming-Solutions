#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,area1,area2,area3,area4,area5,area6;
    cin>>n;
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    if(n==1)
    {
        cout<<-1;
        return 0;
    }
    else if(n==2)
    {
        area1=abs(x[0]-x[1])*abs(y[0]-y[1]);
        if(area1==0)
        {
            cout<<-1;
            return 0;
        }
        else
        {
            cout<<area1;
        }
    }
    else if(n==3)
    {
        area1=abs(x[0]-x[1])*abs(y[0]-y[1]);
        area2=abs(x[0]-x[2])*abs(y[0]-y[2]);
        area3=abs(x[1]-x[2])*abs(y[1]-y[2]);
        if(area1>0)
        {
            cout<<area1;
        }
        else if(area2>0)
        {
            cout<<area2;
        }
        else if(area3>0)
        {
            cout<<area3;
        }
        else
        {
            cout<<-1;
        }
    }
    else if(n==4)
    {
        area1=abs(x[0]-x[1])*abs(y[0]-y[1]);
        area2=abs(x[0]-x[2])*abs(y[0]-y[2]);
        area3=abs(x[1]-x[2])*abs(y[1]-y[2]);
        area4=abs(x[2]-x[3])*abs(y[2]-y[3]);
        area5=abs(x[3]-x[0])*abs(y[3]-y[0]);
        area6=abs(x[3]-x[1])*abs(y[3]-y[1]);
        if(area1>0)
        {
            cout<<area1;
        }
        else if(area2>0)
        {
            cout<<area2;
        }
        else if(area3>0)
        {
            cout<<area3;
        }
        else if(area4>0)
        {
            cout<<area4;
        }
        else if(area5>0)
        {
            cout<<area5;
        }
        else if(area6>0)
        {
            cout<<area6;
        }
        else
        {
            cout<<-1;
        }
    }
    return 0;
}
