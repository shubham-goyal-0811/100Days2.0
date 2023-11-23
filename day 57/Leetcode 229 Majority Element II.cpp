class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1=INT_MIN;
        int ele2=INT_MIN;
        int cnt1=0;
        int cnt2=0;
        for(int i =0;i<nums.size();i++){
            if(ele1!=nums[i] and cnt2==0){
                cnt2++;
                ele2=nums[i];
            }
            else if(ele2!=nums[i] and cnt1==0){
                cnt1++;
                ele1=nums[i];
            }
            else if(nums[i]==ele1){
                cnt1++;
            }
            else if (nums[i]==ele2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }//Dono majority element mil gye hai hume 
        vector<int> ans;
        cnt1=0;
        cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1){
                cnt1++;
            }
            else if (nums[i]==ele2){
                cnt2++;
            }
        }
        if(cnt1>(nums.size()/3))
            ans.push_back(ele1);
        if(cnt2>(nums.size()/3))
            ans.push_back(ele2);
        return ans;
    }
};
