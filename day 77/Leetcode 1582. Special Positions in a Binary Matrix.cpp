class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row= mat.size();
        int col = mat[0].size();

        vector<int> rows(row,0);
        vector<int> cols(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        int count = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1 and rows[i]==1 and cols[j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};