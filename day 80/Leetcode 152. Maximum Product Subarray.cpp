class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1;
        int suff=1;
        int maxp=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            pre*=nums[i];
            suff*=nums[n-i-1];
            maxp=max(maxp,pre);
            maxp=max(maxp,suff);
            if(pre==0)
                pre=1;
            if(suff==0)
                suff=1;
        }
        return maxp;
    }
};
