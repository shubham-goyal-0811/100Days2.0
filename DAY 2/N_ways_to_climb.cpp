/*Given a number of steps of a stair FIND in how many ways we can reach from 0th to nth step You can climb either 1 2 or 3 steps at a time.*/
#include <bits/stdc++.h>
using namespace std;
int countstep(int currPos,int n){
    if(currPos>n)
       return 0;
    if(currPos==n){
        return 1;
    }
    int x=countstep(currPos+2,n);
    int y=countstep(currPos+3,n);
    int z=countstep(currPos+5,n);
    return (x+y+z);

}
int main(){
    int n;
    cin>>n;

    int ans=countstep(0,n);
    cout<<ans;
}