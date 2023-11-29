class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        if(n==1)
            return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            while(nums[i]==nums[i+1]){
                i++;
            }
            ans+=n-i-1;
        }
        return ans;
    }
};
