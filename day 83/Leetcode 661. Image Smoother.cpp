class Solution {
public:
    int bhap(vector<vector<int>>& img,int x,int y){
        int rows = img.size();
        int cols = img[0].size();
        int sum = 0;
        int count = 0;
        for(int i = -1;i<=1;i++){
            for(int j = -1;j<=1;j++){
                int nayax = x+i;
                int nayay = y+j;
                if(nayax>=0 && nayax < rows && nayay >= 0 && nayay < cols){
                    sum += img[nayax][nayay];
                    ++count;
                }
            }
        }
        return sum/count;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = img.size();
        int cols = img[0].size();
        vector<vector<int>> ans(rows,vector<int>(cols,0));
        //intialize ta krti hun harr te traverse krda
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                ans[i][j] = bhap(img,i,j);
            }
        }
        return ans;
    }
};