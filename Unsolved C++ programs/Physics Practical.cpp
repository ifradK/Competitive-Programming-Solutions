#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long n,i=0,cnt,cnt1=0,cnt2=0,ans1=0,ans2=0,ans3=0,ans4=0,ans;
    cin>>n;
    int a[n];
    int left=0,right=n-1;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]*2>=a[n-1] || (float)a[n-1]/2<=(float)a[0])
    {
        cout<<0;
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            if(a[left]*2>=a[right])
            {
                break;
            }
            else
            {
                cnt1++;
                left++;
            }
        }
        else
        {
            if((float)a[right]/2<=(float)a[left])
            {
                break;
            }
            else
            {
                cnt2++;
                right--;
            }
        }
    }
    ans1=cnt1+cnt2;
    left=0;
    right=n-1;
    cnt1=0;
    cnt2=0;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            if(a[left]*2>=a[right])
            {
                break;
            }
            else
            {
                cnt1++;
                left++;
            }
        }
        else
        {
            if((float)a[right]/2<=(float)a[left])
            {
                break;
            }
            else
            {
                cnt2++;
                right--;
            }
        }
    }
    ans2=cnt1+cnt2;
    i=0;
    while(1)
    {
        if(a[i]*2>=a[n-1])
        {
            break;
        }
        else
        {
            i++;
            ans3++;
        }
    }
    i=n-1;
    while(1)
    {
        if((float)a[i]/2<=(float)a[0])
        {
            break;
        }
        else
        {
            i--;
            ans4++;
        }
    }
    ans=min(min(ans1,ans2),min(ans3,ans4));
    cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<endl;
    cout<<ans;
    return 0;
}
