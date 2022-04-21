class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,cnt=0;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            if(nums.size()==0)
            {
                break;
            }
            if(*it==0)
            {
                cnt++;
                nums.erase(it);
                it--;
            }
        }
        for(i=0;i<cnt;i++)
        {
            nums.push_back(0);
        }
    }
};
