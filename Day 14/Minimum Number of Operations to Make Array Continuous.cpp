class Solution {
public:
    int minOperations(vector<int>& nums) {
    int length = nums.size();

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    int end = 0;
    int maxi = INT_MIN;

    for (int start = 0; start < nums.size(); start++) {
        while (end < nums.size() && nums[end] < nums[start] + length) {
            end++;
        }
        int candidateCount = end - start;
        maxi = max(maxi, candidateCount);
    }

    return length - maxi;
    }
};
