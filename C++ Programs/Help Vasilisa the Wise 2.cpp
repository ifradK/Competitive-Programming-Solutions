#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,j,a1,a2,b1,b2,c1,c2,d1,d2,r1,r2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(i=1;i<r1;i++)
    {
        for(j=1;j<r2;j++)
        {
            if((i+(r2-j)==d1) && (j+(r1-i))==d2 && (i+j)==c1 && (r1-i)+(r2-j)==c2 && i!=j && i!=(r1-i) && j!=(r2-j) && (r1-i)!=(r2-j) && i!=(r2-j) && j!=(r1-i) && i<10 && j<10 && (r1-i)<10 && (r2-j)<10)
            {
                cout<<i<<" "<<r1-i<<endl;
                cout<<j<<" "<<r2-j<<endl;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}
