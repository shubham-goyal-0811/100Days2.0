#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int max=i;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[max])
                max=j;
        }
        swap(arr[i],arr[max]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}