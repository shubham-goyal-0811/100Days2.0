class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> ans;
        for(int i =0;i<bank.size();i++){
            int count = 0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1')
                    count++;
            }
            ans.push_back(count);
        }
        int res = 0;
        int i =0;
        int j = 1;
        while(j<ans.size()){
            if(j==i)
                j++;
            else if(ans[i]==0){
                i++;
            }
            else if(ans[j]==0)
                j++;
            else{
                res+=ans[i]*ans[j];
                i++;
                j++;
            }
        } 
        return res;
    }
};