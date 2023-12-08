class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ss;
        unordered_map<char,int> tt;
        for(auto x : s){
            ss[x]++;
        }
        for(auto x : t){
            tt[x]++;
        }
        // int i = 0;
        for(auto x : ss){
            if(tt.find(x.first)!=tt.end()){
                if(x.second == tt[x.first]){
                    continue;
                }
                else
                    return 0;
            }
            else
                return false;
        }
        for(auto x : tt){
            if(ss.find(x.first)==ss.end()){
                return 0;
            }
        }



        return true;

    }
};
