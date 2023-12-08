#include <bits/stdc++.h> 
vector<int> completeSum(vector<int> &a, int n) {
    // Write your code here.
    vector<int> ans;
    int sum = 0;
    for(auto x : a){
        sum+=x;
        ans.push_back(sum);
    }
    return ans;
}
