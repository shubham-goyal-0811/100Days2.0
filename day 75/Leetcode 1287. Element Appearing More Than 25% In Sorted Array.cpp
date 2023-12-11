class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map <int,int> mapp;
        for(auto x : arr){
            mapp[x]++;
        }
        int minF= arr.size()*0.25;
        for(auto x : mapp){
            if(x.second>minF){
                return x.first;
            }
        }
        return -1;
    }
};