#include<iostream>
#include <bits/stdc++.h>
using namespace std;
string a;
int i,palindrome;
int ispalindrome(string b)
{
    for(i=0; i<b.size(); i++)
    {
        if(b[i]!=b[b.size()-i-1])
        {
            palindrome=0;
            break;
        }
        else
        {
            palindrome=1;
        }
    }
    return palindrome;
}
main()
{
    int t,q,s;
    cin>>t;
    while(t--)
    {
        cin>>a;
        q=ispalindrome(a);
        if(q==0)
        {
            cout<<a<<endl;
        }
        else
        {
            sort(a.begin(),a.end());
            s=ispalindrome(a);
            if(s==0)
            {
                cout<<a<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
