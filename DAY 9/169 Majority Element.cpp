class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        map<int,int> mpp; int ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto i : mpp){
            if(i.second>nums.size()/2)
                ans= i.first;
        }
        return ans;
    }
};
