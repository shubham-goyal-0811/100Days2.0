#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    //2 pointer approach lagaunga: sirf 0 aur 2 ko sort krdo baki kaam apne aap hogya
    int l = 0;
    int l2 =0;
    n=n-1;
    while(l<=n){
        if(arr[l]==0){
            arr[l]=arr[l2];
            arr[l2]=0;
            l++;
            l2++;
        }
        else if (arr[l]==2){
            arr[l]=arr[n];
            arr[n]=2;
            n--;
        }
        else
            l++;
    }


}
