class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxsum=INT_MIN;
    int sum=0;
    for(auto x : nums){
        sum+=x;
        maxsum=max(sum,maxsum);
        if(sum<0)
            sum=0;
    }
    return maxsum;
    }
};
