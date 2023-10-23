#include <bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int j = 0;
    int ans = 0; // Initialize ans to 0
    long long sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];

        while (sum > k && j <= i) {
            sum -= a[j];
            j++;
        }

        if (sum == k) {
            ans = max(ans, i - j + 1);
        }
    }
    return ans;

}
