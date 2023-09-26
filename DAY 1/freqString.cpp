#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[26]={0};//Here the size is fixed as there are only 26 alphabets
    for(int i=0;i<n;i++){
        
        hash[arr[i]-'a']+=1;
    }
    char a;
    cin>>a;
    cout<<"frequency = "<<hash[a-'a'];
}