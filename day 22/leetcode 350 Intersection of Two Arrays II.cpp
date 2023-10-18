class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        map <int,int> mpp;
        for(auto x : nums1){
            mpp[x]++;
        }

        for(auto x : nums2){
            auto it=mpp.find(x);
            if(it!=mpp.end() and it->second>0){
                ans.push_back(x);
                it->second--;
            }
        }
        return ans;
    }
};
