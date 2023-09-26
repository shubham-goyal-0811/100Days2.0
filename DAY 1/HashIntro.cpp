#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13]={0};// this 13 depends on the constraint

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int x;
    cin>>x;
    cout<<"frequency = "<<hash[x];
}