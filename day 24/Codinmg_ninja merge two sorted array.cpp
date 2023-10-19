/*
Problem Link : https://www.codingninjas.com/codestudio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
*/
#include <bits/stdc++.h>
vector<int> sortedArray(vector<int> a, vector<int> b) {
    vector<int> ans;
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(ans.size()==0 || ans.back()!=a[i]){
            ans.push_back(a[i]);
            
        }
        i++;
    }
    while(j<m){
        if(ans.size()==0 || ans.back()!=b[j]){
            ans.push_back(b[j]);
            
        }
        j++;   
    }
    return ans;
}
