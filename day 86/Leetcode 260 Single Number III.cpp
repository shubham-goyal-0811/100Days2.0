class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector <int> ans;
        unordered_map <int,int> mapp;
        for(auto x : nums){
            mapp[x]++;
        }
        for(auto x : mapp){
            if(x.second == 1)
                ans.push_back(x.first);
        }


        return ans;
    }
};
