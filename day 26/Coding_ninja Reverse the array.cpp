#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int n=arr.size()-1;
	m++;
	while(m<n){
		swap(arr[m],arr[n]);
		m++;n--;
	}
}
