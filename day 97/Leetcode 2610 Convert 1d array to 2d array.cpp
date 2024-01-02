class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int> mapp;
        for(auto x : nums){
            mapp[x]++;
        }
        while(!mapp.empty()){
            vector<int> temp;
            vector<int> del;
            for(auto &x : mapp){
                if(x.second > 0 ){
                    temp.push_back(x.first);
                    x.second=x.second - 1;
                }
                if (x.second == 0){
                    del.push_back(x.first);
                }
            }
            for(auto x : del){
                mapp.erase(x);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};