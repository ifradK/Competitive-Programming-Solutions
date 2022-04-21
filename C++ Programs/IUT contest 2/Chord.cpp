#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int p,q,r,a[3];
    string x,y,z;
    cin>>x>>y>>z;

    if(x=="C") p=1; else if(x=="C#") p=2; else if(x=="D") p=3; else if(x=="D#") p=4; else if(x=="E") p=5; else if(x=="F") p=6;
    else if(x=="F#") p=7; else if(x=="G") p=8; else if(x=="G#") p=9; else if(x=="A") p=10; else if(x=="B") p=11; else if(x=="H") p=12;

    if(y=="C") q=1; else if(y=="C#") q=2; else if(y=="D") q=3; else if(y=="D#") q=4; else if(y=="E") q=5; else if(y=="F") q=6;
    else if(y=="F#") q=7; else if(y=="G") q=8; else if(y=="G#") q=9; else if(y=="A") q=10; else if(y=="B") q=11; else if(y=="H") q=12;

    if(z=="C") r=1; else if(z=="C#") r=2; else if(z=="D") r=3; else if(z=="D#") r=4; else if(z=="E") r=5; else if(z=="F") r=6;
    else if(z=="F#") r=7; else if(z=="G") r=8; else if(z=="G#") r=9; else if(z=="A") r=10; else if(z=="B") r=11; else if(z=="H") r=12;

    a[0]=p; a[1]=q; a[2]=r;
    sort(a,a+3);
    if((a[1]-a[0]==4 && a[2]-a[1]==3) || (a[2]-a[1]==4 && (12-a[2])+a[0]==3) || ((12-a[2])+a[0]==4 && a[1]-a[0]==3))
    {
        cout<<"major";
    }
    else if((a[1]-a[0]==3 && a[2]-a[1]==4) || (a[2]-a[1]==3 && (12-a[2])+a[0]==4) || ((12-a[2])+a[0]==3 && a[1]-a[0]==4))
    {
        cout<<"minor";
    }
    else
    {
        cout<<"strange";
    }
    return 0;
}
