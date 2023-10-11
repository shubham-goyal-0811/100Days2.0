class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // cout<<nums.size();
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i])
                return i;
        }
        return nums.size();
    }
};