#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

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

long long KMPSearch(string pat, string txt)
{
    long long M = pat.size();
    long long N = txt.size();
    long long lps[M];
    computeLPSArray(pat, M, lps);
    long long i = 0,cnt=0;
    long long j = 0;
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
            cnt++;
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
            }
        }
    }
    return cnt;
}

int main()
{
    fastio;
    long long t;
    string pat,txt;
    cin>>t;
    while(t--)
    {
        cin>>pat>>txt;
        cout<<KMPSearch(pat,txt)<<endl;
    }
    return 0;
}
