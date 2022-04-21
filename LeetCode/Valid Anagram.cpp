class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char,long long> mp;
    bool flag=true;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s!=t)
    {
        flag=false;
    }
        return flag;
    }
};
