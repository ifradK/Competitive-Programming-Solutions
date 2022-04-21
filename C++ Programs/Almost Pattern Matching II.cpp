#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
main()
{
    string s,p;
    long i,j,g,n,t,k,distance=0,m=0,Count=0;
    cin>> t;
    for(i=1; i<=t; i++)
    {
        cin>>s>>p>>k;
        long slength=s.size();
        long plength=p.size();
        Count=0;
        for(g=0; g<slength; g++)
        {
            if(g==slength-plength+1)
            {
                break;
            }
            m=0;
            distance=0;
            for(j=g,n=0; j<g+plength,n<plength; j++,n++)
            {
                if(s[j]==p[n])
                {
                    m++;
                }
                else if(s[j]!=p[n])
                {
                    m++;
                    distance++;
                }
                //printf("plength=%d slength=%d g=%d j=%d n=%d m=%d distance=%d count=%d\n",plength,slength,g,j,n,m,distance,Count);
                //printf("g=%d j=%d n=%d m=%d distance=%d count=%d\n",g,j,n,m,distance,Count);
                if(distance>k)
                {
                    break;
                }
                if(m==plength)
                {
                    Count++;
                    break;
                }
                //printf("g=%d j=%d n=%d m=%d distance=%d count=%d\n",g,j,n,m,distance,Count);
            }
        }
        printf("Case %ld: %ld\n",i,Count);
    }
    return 0;
}
