class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        //Brute- 2 loop kaam khatam :)
        int n = arr.size();
        int maxx = -1;
        for(int i = n-1;i>=0;i--){
            int curr = arr[i];
            arr[i]=maxx;
            maxx = max(maxx,curr);
        }

        return arr;
    }
};
