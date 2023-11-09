class Solution {
public:
    int countHomogenous(string s) {
        long long count=1;
        long long ans=1;
        long long mod=1e9+7;

        for(int i=0;i<s.size()-1;i++){
            count = s[i+1]==s[i]?count+1:1;
            ans=(count+ans)%mod;
        }
        return ans;
    }
};
