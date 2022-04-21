void computeLPSArray(string pat, int M, int* lps)
{
    int len = 0;
    lps[0] = 0;
    int i=1;
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

int KMPSearch(string pat, string txt)
{
    int M = pat.size();
    int N = txt.size();
    int lps[M];
    computeLPSArray(pat, M, lps);
    int i = 0;
    int j = 0;
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
            return i-j;
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
    return -1;
}


class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")
        {
            return 0;
        }
        int ans = KMPSearch(needle,haystack);

        if(ans==-1)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};
