class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxc=0;
        int count=0;
        cout<<nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                maxc=max(count,maxc);
                count=0;
            }
        }
        maxc=max(count,maxc);
        return maxc;
    }
};
