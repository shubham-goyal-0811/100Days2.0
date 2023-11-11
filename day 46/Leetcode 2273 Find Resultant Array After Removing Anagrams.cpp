class Solution {
public:
    bool check(string s1,string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1==s2)
            return 0;
        else 
            return 1;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        int k=0;
        for(int i=0;i<words.size();i++){
            if(i==0 or check(words[i],ans[k-1])){
                ans.push_back(words[i]);
                k++;
            }
        }
        return ans;
    }
};
