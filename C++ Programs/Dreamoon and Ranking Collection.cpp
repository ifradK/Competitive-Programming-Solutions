#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int t,n,x,val,i,j,b;
    cin>>t;
    while(t--)
    {
        set<int> s;
        cin>>n>>x;
        b=x;
        for(i=0;i<n;i++)
        {
            cin>>val;
            s.insert(val);
        }
        i=0;
        int a[s.size()];
        for(int x:s)
        {
            a[i]=x;
            i++;
        }
        i=0;
        j=1;
        int cnt=0;
        while(1)
        {
            if(x==-1)
            {
                break;
            }
            if(a[i]==j)
            {
                i++;
                cnt++;
            }
            else
            {
                x--;
            }
            j++;
        }
        cout<<cnt+b<<endl;
        s.clear();
    }
    return 0;
}
