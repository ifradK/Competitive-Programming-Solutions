#include<iostream>
#include <bits/stdc++.h>
#include<stdio.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,m,o1,o2,i,j;
        cin>>n>>m;
        char ch;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(j=0; j<m; j++)
        {
            cin>>ch;
            if(ch=='S')
            {
                cin>>o1;
                for(i=0; i<n; i++)
                {
                    a[i]=a[i]+o1;
                }
            }
            else if(ch=='M')
            {
                cin>>o1;
                for(i=0; i<n; i++)
                {
                    a[i]=a[i]*o1;
                }
            }
            else if(ch=='D')
            {
                cin>>o1;
                for(i=0; i<n; i++)
                {
                    a[i]=a[i]/o1;
                }
            }
            else if(ch=='R')
            {
                int k,temp;
                for(k=0; k<=(n-1)/2; k++)
                {
                    temp=a[k];
                    a[k]=a[n-k-1];
                    a[n-k-1]=temp;
                }
            }
            else if(ch=='P')
            {
                int temp;
                scanf("%d%d", &o1, &o2);
                temp=a[o1];
                a[o1]=a[o2];
                a[o2]=temp;
            }
        }
        printf("Case %d:\n", cs);
        cs++;
        for(i=0; i<n; i++)
        {
            printf("%d",a[i]);
            if(i!=n-1)
            {
                printf(" ");
            }
        }
        cout<<endl;
    }
    return 0;
}
