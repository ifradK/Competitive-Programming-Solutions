#include<bits/stdc++.h>
using namespace std;
int main()
{
    int people;
    int plane;
    cin>>people>>plane;
    int a[1000];
    int b[1000];
    for(int i=0;i<plane;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    int ansmax=0;

    int pp=0;

    while(1)
    {

        int maxaa=0;
        int position;
        for(int i=0;i<plane;i++)
        {
            if(a[i]>=maxaa)
            {
                maxaa=a[i];
                position=i;
            }
        }
        a[position]=a[position]-1;
        ansmax=ansmax+maxaa;

        int sumu=0;
        for(int i=0;i<plane;i++)
        {
            sumu=sumu+a[i];
        }


        if(pp==people-1)
        {
            break;
        }
        else
        {
            pp=pp+1;
            continue;
        }

    }


    int ansmini=0;
    int pp2=0;

     while(1)
    {

        int mini=10000;
        int position;
        for(int i=0;i<plane;i++)
        {
            if(b[i]==0)
            {
                continue;
            }

            if(b[i]<=mini)
            {
                mini=b[i];
                position=i;
            }
        }
        b[position]=b[position]-1;
        ansmini=ansmini+mini;

        int sumu=0;
        for(int i=0;i<plane;i++)
        {
            sumu=sumu+b[i];
        }


        if(pp2==people-1)
        {
            break;
        }
        else
        {
            pp2=pp2+1;
            continue;
        }

    }

    cout<<ansmax<<" "<<ansmini<<endl;




}
