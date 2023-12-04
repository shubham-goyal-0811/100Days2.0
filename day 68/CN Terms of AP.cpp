#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.
    vector<int> ans;
    int count =0;
    int i =1;
    while(count<x){
        if((3*i+2)%4==0){
            i++;
        } else {
            ans.push_back(3*i+2);
            count++;
            i++;
        }
    }



    return ans;
}
