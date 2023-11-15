class Solution {
  public:
  int countsub(string &str){
      unordered_map<char,int> lolo;
      int n = str.length();
      int dp[n+1];
      dp[0] = 1;
      for(int i = 1;i<=n;i++){
          dp[i] = 2*dp[i-1];
          if(lolo.find(str[i-1]) != lolo.end()){
              dp[i] = dp[i]-dp[lolo[str[i-1]]];
          }
          lolo[str[i-1]] = i-1;
      }
      return dp[n];
  }
    string betterString(string str1, string str2) {
        // code here
        int a = countsub(str1);
        int b = countsub(str2);
        if(a<b){
            return str2;
        }
        return str1;
    }
};