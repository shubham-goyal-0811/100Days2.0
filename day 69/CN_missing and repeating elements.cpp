#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)

{

int duplicate = -1, missing = -1;

for(int i=0;i<n;i++){

int ind = abs(arr[i])-1;

arr[ind]*=-1;

if(arr[ind]>0){

duplicate = abs(arr[i]);

}

}

for(int i=0;i<n;i++){

if(i!=duplicate-1 && arr[i]>0){

missing = i+1;

break;

}

}

return {missing,duplicate};

}
