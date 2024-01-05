class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftpro(n);
        leftpro[0]=1;
        vector<int> rightpro(n);
        rightpro[n-1]=1;
        vector<int> ans(n);
        for(int i =1;i<n;i++){
            leftpro[i]=nums[i-1]*leftpro[i-1];
        }
        for(int i=n-2;i>=0;i--){
            rightpro[i]=nums[i+1]*rightpro[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=leftpro[i]*rightpro[i];
        }
        return ans;
    }
};
