class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> ans(nums.size(),0);
        int posid=0;
        int negid=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                //+ve
                ans[posid]=nums[i];
                posid+=2;
            }
            else{
                ans[negid]=nums[i];
                negid+=2;
            }
        }
        return ans;
    }
};//same code cubmitted on coding ninja Working fine :)
