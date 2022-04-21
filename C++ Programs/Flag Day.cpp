#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,m,a,b,c,i;
    cin>>n>>m;
    long long arr[n+1]={0};
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        if(arr[a]==0 && arr[b]==0 && arr[c]==0)
        {
            arr[a]=1;
            arr[b]=2;
            arr[c]=3;
        }
        else
        {
            if(arr[a]!=0)
            {
                if(arr[a]==1){arr[b]=2;arr[c]=3;}
                else if(arr[a]==2){arr[b]=1;arr[c]=3;}
                else if(arr[a]==3){arr[b]=1;arr[c]=2;}
            }
            else if(arr[b]!=0)
            {
                if(arr[b]==1){arr[a]=2;arr[c]=3;}
                else if(arr[b]==2){arr[a]=1;arr[c]=3;}
                else if(arr[b]==3){arr[a]=1;arr[c]=2;}
            }
            else if(arr[c]!=0)
            {
                if(arr[c]==1){arr[a]=2;arr[b]=3;}
                else if(arr[c]==2){arr[a]=1;arr[b]=3;}
                else if(arr[c]==3){arr[a]=1;arr[b]=2;}
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
