class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map <string ,int> mapp;
        for(auto x: paths){
            mapp[x[0]]++;//source
            mapp[x[1]]--;//Destination
        }
        for(auto x : mapp){
            if(x.second==-1)
                return x.first;
        }
        return "";
    }
};