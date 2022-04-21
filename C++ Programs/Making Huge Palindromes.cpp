#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

vector<ll> v;

void computeLPSArray(string pat, long long M, long long* lps)
{
    long long len = 0;
    lps[0] = 0;
    long long i=1;
    while(i<M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(string pat, string txt)
{
    long long M = pat.size();
    long long N = txt.size();
    long long lps[M];
    computeLPSArray(pat, M, lps);
    long long i = 0;
    long long j = 0;
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
            v.push_back(j);
            //cout<<j<<" ";
        }
        if (j == M)
        {
            //cout<<i-j<<endl;
            j = lps[j - 1];
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i = i + 1;
               // cout<<"0 ";
            }
        }
    }
}

int main()
{
    fastio;
    ll t,cs=1;
    cin>>t;
    while(t--)
    {
        string str,str2;
        cin>>str;
        str2=str;
        reverse(str2.begin(),str2.end());
        KMPSearch(str2,str);
        cout<<"Case "<<cs++<<": "<<+2*str.size()-v[v.size()-1]<<endl;
        v.clear();
    }
    return 0;
}

