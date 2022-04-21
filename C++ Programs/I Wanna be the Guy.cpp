#include<iostream>
using namespace std;
main()
{
    int n,p,q,i,j,k,l=0;
    scanf("%d",&n);
    int a[n],b[n];
    scanf("%d",&p);
    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(j=0; j<q; j++)
    {
        scanf("%d",&b[j]);
    }
    if(p>=q)
    {
        for(k=1; k<=n; k++)
        {
            for(i=0; i<p; i++)
            {
                if(a[i]==k || b[i]==k)
                {
                    l++;
                    break;
                }
            }

        }
    }
    else
    {
        for(k=1; k<=n; k++)
        {
            for(i=0; i<q; i++)
            {
                if(a[i]==k || b[i]==k)
                {
                    l++;
                    break;
                }
            }

        }
    }
    if(l==n)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
    return 0;
}

