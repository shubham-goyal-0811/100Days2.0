int sumupper=0;
        int sumlower = 0;
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                sumupper+=matrix[i][j];
            }
            for(int j = 0;j<=i;j++){
                sumlower+=matrix[i][j];
            }
        }
        vector<int>ans;
        ans.push_back(sumupper);
        ans.push_back(sumlower);
        return ans;