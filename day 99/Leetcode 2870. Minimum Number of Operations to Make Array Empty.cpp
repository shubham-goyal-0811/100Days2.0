class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mapp;
        for(auto x: nums){
            mapp[x]++;
        }
        int ans = 0;
        for(auto x : mapp){
            if(x.second == 1){
                return -1;
            }
            ans += x.second/3;
            if(x.second %3){
                ans++;
            }
        }
        return ans;
    }
};
