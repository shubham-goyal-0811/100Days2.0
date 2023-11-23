class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<=2){
            return {};
        }
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        if(nums[0]>0){
            return {};
        }
        for(int i =0 ; i<nums.size()-1;i++){
            if(nums[i]>0)
                break;
            if(i>0 and nums[i-1]==nums[i]){
                continue;
            }
            int j=i+1;
            int k= nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if ( sum < 0){
                    j++;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    int lastj= nums[j];
                    int lastk=nums[k];
                    while(j<k and nums[j]==lastj){
                        j++;
                    }
                    while(j<k and nums[k]==lastk)
                        k--;
                }
            }
        }
        return ans;
    }
};
