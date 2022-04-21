#include<iostream>
using namespace std;
main()
{
    int n,a,b,i,j,k,white=0,black=0,ans=0,count1=0;
    cin>>n>>a>>b;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]==2)
        {
            count1++;
        }
    }
    if(count1==n)
    {
        if(a<=b)
        {
            ans=count1*a;
        }
        else
        {
            ans=count1*b;
        }
        cout<<ans;
        return 0;
    }
    for(j=0,k=n-1 ; j<n,k>=0 ; j++,k--)
    {
        if(arr[j]==0 && arr[k]==0)
        {
            continue;
        }
        else if(arr[j]==1 && arr[k]==1)
        {
            continue;
        }
        else if(arr[j]==0 && arr[k]==2)
        {
            arr[k]=0;
            white++;
        }
        else if(arr[j]==2 && arr[k]==0)
        {
            arr[j]=0;
            white++;
        }
        else if(arr[j]==1 && arr[k]==2)
        {
            arr[k]=1;
            black++;
        }
        else if(arr[j]==2 && arr[k]==1)
        {
            arr[j]=1;
            black++;
        }
        else if(arr[j]==0 && arr[k]==1)
        {
            cout<<-1;
            return 0;
        }
        else if(arr[j]==1 && arr[k]==0)
        {
            cout<<-1;
            return 0;
        }
        else if(arr[j]==2 && arr[k]==2)
        {
            if(a<=b)
            {
                white++;
            }
            else
            {
                black++;
            }
        }
        else if(j==k)
        {
            if(arr[j]==2)
            {
                if(a<=b)
                {
                    white++;
                }
                else
                {
                    black++;
                }
            }
            else
            {
                cout<<-1;
                return 0;
            }
        }
    }
    ans=(a*white)+(b*black);
    cout<<ans;
    return 0;
}
