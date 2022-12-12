class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int arr[20010] = {};
        int temp,i;
        for(i=0;i<nums.size();i++)
        {
            temp = nums[i]+10000;
            arr[temp]++;
        }
        for(i=20000;i>=0;i--)
        {
            k = k-arr[i];
            if(k<=0){break;}
        }
        temp = i-10000;

        return temp;
    }
};
