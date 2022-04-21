#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a,turn=0,alice=0,bob=0;
        bool flag_even=false, flag_odd=false;
        vector<long long> v_even,v_odd;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                v_even.push_back(a);
            }
            else
            {
                v_odd.push_back(a);
            }
        }
        sort(v_even.begin(),v_even.end(),greater<long long>());
        sort(v_odd.begin(),v_odd.end(),greater<long long>());
        for(i=0,j=0; ;)
        {
            if(i==v_even.size())
            {
                flag_even=true;
                break;
            }
            else if(j==v_odd.size())
            {
                flag_odd=true;
                break;
            }

            if(turn%2==0)
            {
                if(v_even[i]>=v_odd[j])
                {
                    alice=alice+v_even[i];
                    i++;
                }
                else
                {
                    j++;
                }
            }
            else
            {
                if(v_even[i]<=v_odd[j])
                {
                    bob=bob+v_odd[j];
                    j++;
                }
                else
                {
                    i++;
                }
            }
            turn++;
        }
        if(flag_even==true)
        {
            while(1)
            {
                if(j==v_odd.size())
                {
                    break;
                }
                if(turn%2==0)
                {
                    j++;
                }
                else
                {
                    bob=bob+v_odd[j];
                    j++;
                }
                turn++;
            }
        }
        else if(flag_odd==true)
        {
            while(1)
            {
                if(i==v_even.size())
                {
                    break;
                }
                if(turn%2==0)
                {
                    alice=alice+v_even[i];
                    i++;
                }
                else
                {
                    i++;
                }
                turn++;
            }
        }
        if(alice>bob)
        {
            cout<<"Alice"<<endl;
        }
        else if(alice==bob)
        {
            cout<<"Tie"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
        v_even.clear();
        v_odd.clear();
    }
    return 0;
}
