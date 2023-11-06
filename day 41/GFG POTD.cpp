// User function Template for C++

class Solution{
public:
    static bool issafe(int nayax,int nayay,int n,int m){
        return (nayax>=0 && nayax<n && nayay>=0 && nayay<m);
    } 

    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        vector<int> ans;
        vector<int> dx1 = {-1, -1, -1, 0, 0, 1, 1, 1};
        vector<int> dy1 = {-1, 0, 1, -1, 1, -1, 0, 1};
        vector<int> dx2 = {-2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 2};
        vector<int> dy2 = {-2, -1, 0, 1, 2, -2, 2, -2, 2, -2, 2, -2, -1, 0, 1, 2};
        
        for (int i = 0; i < q; i++) {
            int sum = 0;
            int x = queries[i][1];
            int y = queries[i][2];
        
            if (queries[i][0] == 1) {
                for (int k = 0; k < dx1.size(); k++) {
                    int nayax = x + dx1[k];
                    int nayay = y + dy1[k];
                    if (issafe(nayax, nayay, n, m)) {
                        sum += mat[nayax][nayay];
                    }
                }
            } else {
                for (int k = 0; k < dx2.size(); k++) {
                    int nayax = x + dx2[k];
                    int nayay = y + dy2[k];
                    if (issafe(nayax, nayay, n, m)) {
                        sum += mat[nayax][nayay];
                    }
                }
            }
        
            ans.push_back(sum);
        }
        return ans;
    }
};