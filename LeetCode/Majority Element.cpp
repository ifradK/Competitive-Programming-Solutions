class Solution {
public:
    int majorityElement(vector<int>& nums) {
    map<int,int> mp;
    for(int i=0; i<nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    vector<pair<int,int>> v;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        v.push_back({it->second,it->first});
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    return v.begin()->second;
    }
};
