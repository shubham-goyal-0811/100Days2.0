/*
for problem statement refer to Problem_statement.jpg :)
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    
    int maxi=0;

    for(int i=0;i<k;i++){
        maxi+=arr[i];
    }
    int s=maxi;
    for(int i=k;i<n;i++){
        s+=arr[i]-arr[i-k];
        maxi= max(s,maxi);
    }

    cout<<maxi;
}