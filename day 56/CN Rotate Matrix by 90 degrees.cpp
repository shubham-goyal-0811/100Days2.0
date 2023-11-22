#include<bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	for(int i=0;i<mat.size();i++){
		for(int j = 0 ; j< i ;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}//Transopose hogya ab maaro reverse
	for(int i = 0 ; i<mat.size();i++){
		reverse(mat[i].begin(),mat[i].end());
	}

}
