class Solution {
public:
    bool help(string word,char x){
        for(auto c:word){
            if(c==x)
                return 1;
        }
        return 0;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            if(help(words[i],x))
                ans.push_back(i);
        }
        return ans;
    }
};