class Solution {
public:
    vector<int> nsl(vector <int> &nums){
        vector<int> left;
        stack <int>st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() and nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(st.empty()){
                left.push_back(-1);
            }
            else
                left.push_back(st.top());
            st.push(i);
        }
        return left;
    }
    vector<int> nsr(vector <int> &nums){
        vector<int> right;
        stack <int>st;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() and nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(st.empty()){
                right.push_back(nums.size());
            }
            else
                right.push_back(st.top());
            st.push(i);
        }
        return right;
    }
    int largestRectangleArea(vector<int>& nums) {
        vector<int>left=nsl(nums);
        vector<int> right = nsr(nums);
        int ans=0;
        reverse(right.begin(),right.end());
        for(int i=0;i<nums.size();i++){
            int l=left[i];
            int r=right[i];
            ans=max((nums[i]*(r-l-1)),ans);
        }
        return ans;
    }
};
