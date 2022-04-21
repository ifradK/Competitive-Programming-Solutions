class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
    for(int i=0; i<s.size(); i++)
    {
        v.push_back(s[i]);
    }
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        if((*it>='A' && *it<='Z') || (*it>='a' && *it<='z') || (*it>='0' && *it<='9')){}
        else
        {
            v.erase(it);
            it--;
        }
    }
    bool flag=true;
    for(int i=0,j=v.size()-1; i<v.size()/2; i++,j--)
    {
        if(v[i]>='A' && v[i]<='Z')
        {
            v[i]=v[i]+32;
        }
        if(v[j]>='A' && v[j]<='Z')
        {
            v[j]=v[j]+32;
        }
        if(v[i]!=v[j])
        {
            flag=false;
            break;
        }
    }
         return flag;
    }
};
