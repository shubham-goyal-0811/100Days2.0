#include <bits/stdc++.h>
using namespace std;
int minIndex(int arr[],int i,int j){
    if (i==j)
        return i;
    int x=minIndex(arr,i+1,j);

    return arr[i]>arr[x]?x:i;
}
void selectionsort(int arr[],int n,int i){
    if(i==n)
        return;
    int k=minIndex(arr,i,n-1);
    if(k!=i)
        swap(arr[i],arr[k]);
    selectionsort(arr,n,i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selectionsort(arr,n,0);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}