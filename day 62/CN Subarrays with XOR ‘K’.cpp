#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int ans = 0;
    map<int,int>mpp;
    int xr=0;
    mpp[0]=1;
    for(int i =0  ; i < a.size();i++){
        xr=xr^a[i];
        int rem = xr^b;
        ans += mpp[rem];
        mpp[xr]++; 
    }
    return ans;
}
//Same code submitted on interview bits :)
