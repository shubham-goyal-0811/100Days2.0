//used a pinch of dutch flag algo. Can call it simple two pointer approach too :)

#include <bits/stdc++.h> 
void sort0and1(int n, vector<int> &arr){
    // Write your code here.
    int i=0;
    int k = n-1;
    while(i<k){
        if(arr[i]==1){
            arr[i]=arr[k];
            arr[k--]=1;
        }
        else if (arr[i]==0)
            i++;
    }
}
