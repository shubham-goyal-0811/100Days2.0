class Solution {
private:
    void kaam(vector<int> nums,vector<int> output,int index,vector<vector<int>> &ans){
        if(index==nums.size()){
            ans.push_back(output);
            return;
        }
        kaam(nums,output,index+1,ans);
        output.push_back(nums[index]);
        kaam(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        kaam(nums,output,0,ans);
        return ans;
    }
};
