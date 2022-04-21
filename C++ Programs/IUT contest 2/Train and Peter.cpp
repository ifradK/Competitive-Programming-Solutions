#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long i,j,k,ans1=0,ans2=0,ans3=0,ans4=0,flag;
    string main,first,second,mainrev;
    cin>>main>>first>>second;

    if(first.size()+second.size()>main.size())
    {
        ans1=0;
        ans2=0;
    }
    else
    {
        for(i=0; i<main.size(); i++)
        {
            j=0;
            flag=0;
            if(main[i]==first[0])
            {
                for(k=i; k<main.size(); k++)
                {
                    if(main[k]==first[j])
                    {
                        j++;
                        flag=k;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(j==first.size())
            {
                break;
            }
        }
        if(j==first.size())
        {
            ans1=1;
        }
        else
        {
            ans1=0;
        }
        if(second.size()>main.size()-flag-1)
        {
            ans2=0;
        }
        else
        {
            for(i=flag+1; i<main.size(); i++)
            {
                j=0;
                if(main[i]==second[0])
                {
                    for(k=i; k<main.size(); k++)
                    {
                        if(main[k]==second[j])
                        {
                            j++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                if(j==second.size())
                {
                    break;
                }
            }
            if(j==second.size())
            {
                ans2=1;
            }
            else
            {
                ans2=0;
            }
        }
    }

    reverse(main.begin(), main.end());
    mainrev=main;
    if(first.size()+second.size()>mainrev.size())
    {
        ans3=0;
        ans4=0;
    }
    else
    {
        for(i=0; i<mainrev.size(); i++)
        {
            j=0;
            flag=0;
            if(mainrev[i]==first[0])
            {
                for(k=i; k<mainrev.size(); k++)
                {
                    if(mainrev[k]==first[j])
                    {
                        j++;
                        flag=k;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(j==first.size())
            {
                break;
            }
        }
        if(j==first.size())
        {
            ans3=1;
        }
        else
        {
            ans3=0;
        }
        if(second.size()>mainrev.size()-flag-1)
        {
            ans4=0;
        }
        else
        {
            for(i=flag+1; i<mainrev.size(); i++)
            {
                j=0;
                if(mainrev[i]==second[0])
                {
                    for(k=i; k<mainrev.size(); k++)
                    {
                        if(mainrev[k]==second[j])
                        {
                            j++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                if(j==second.size())
                {
                    break;
                }
            }
            if(j==second.size())
            {
                ans4=1;
            }
            else
            {
                ans4=0;
            }
        }
    }

    if(ans1==1 && ans2==1 && ans3==1 && ans4==1)
    {
        cout<<"both";
    }
    else if(ans1==1 && ans2==1)
    {
        cout<<"forward";
    }
    else if(ans3==1 && ans4==1)
    {
        cout<<"backward";
    }
    else
    {
        cout<<"fantasy";
    }
    return 0;
}
