#include <bits/stdc++.h>
using namespace std;
bool iseven(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 0;
    return(iseven(n-2));    
}
int main(){
    int n;
    cin>>n;
    bool ans = iseven(n);
    if(ans==1)
        cout<<"EVEN";
    else    cout<<"ODD";
}