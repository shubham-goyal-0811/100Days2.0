class Solution {
public:
    int start(vector<int>& nums, int target){
        int start=0;
        int pos=-1;
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;

            if(nums[mid]==target){
                pos=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else
                end=mid-1;
        }
        return pos;
    }
    int end(vector<int>& nums, int target){
        int start=0;
        int pos=-1;
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;

            if(nums[mid]==target){
                pos=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else
                end=mid-1;
        }
        return pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int s1 = start(nums,target);
        int e1 = end(nums,target);
        ans.push_back(s1);
        ans.push_back(e1);
        return ans;
    }
};
