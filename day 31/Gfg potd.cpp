    int minimumNumberOfDeletions(string S) { 
        // code here
        int n = S.length();
        string mahesh = string(S.rbegin(), S.rend());
        vector<vector<int>> ans(n+1,vector<int>(n+1,0));
        for(int i = n;i>=0;i--){
            for(int j = n;j>=0;j--){
                if(i == n || j == n){
                    ans[i][j] =  0;
                }
                else if(S[i] == mahesh[j]){
                    ans[i][j] = 1+ans[i+1][j+1];
                }
                else{
                    ans[i][j] = max(ans[i][j+1],ans[i+1][j]);
                }
            }
        }
        return n-ans[0][0];

    }
