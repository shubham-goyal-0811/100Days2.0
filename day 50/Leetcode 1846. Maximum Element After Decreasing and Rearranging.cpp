class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int pichu=0;
        for(auto x : arr){
            if(x>pichu)
                pichu++;
        }
        return pichu;
    }
};
