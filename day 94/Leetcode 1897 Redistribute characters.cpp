class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mapp;
        for(int i =0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                mapp[words[i][j]]++;
            }
        }
        for(auto x: mapp){
            if(x.second%words.size()!=0)
                return 0;
        }
        return 1;
    }
};