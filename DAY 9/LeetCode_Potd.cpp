class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int max=n/3;
        vector<int>ans;
        map <int ,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){
            if(i.second> n/3)
                ans.push_back(i.first);
        }
        return ans;
    }
};