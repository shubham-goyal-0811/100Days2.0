class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int count = 0;
        int ans=arr[0];
        for(int i = 1;i < arr.size() ; i++){
            if(arr[i] > ans){
                ans=arr[i];
                count = 1;
            }
            else
                count++;
            if(count == k)
                return ans;
        }
        return ans;
    }
};
