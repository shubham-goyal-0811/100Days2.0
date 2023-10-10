/*
Problem Statement : According to the regulations of Cantilever’s army, a reconnaissance unit should consist of exactly two soldiers. Since these two soldiers should n't differ much, their heights can differ by at most d centimetres.
Captain Bob has n soldiers in his detachment. Their heights are a1, a2, ...,an centimeters. Some soldiers are of the same height. Bob wants to know, how many ways exist to form a reconnaissance unit of two soldiers from his detachment.
Ways (1,2) and (2,1) should be regarded as different.

Input
Input Format
The first line contains the number of testcases, t
For each testcase:
The first line contains the integers, n and d
The second line contains the height of the soldiers
Constraints
1<=t<=10
1<=n<=100
1<=d<=10000
1<=height=10000

Output:-

Print the total number of ways to form a reconnaissance unit of two soldiers from his detachment.

1                                       6
5 10
10 20 50 60 65

6 3
4 7 10 16 18 23
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, d;
        cin >> n >> d;
        
        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }
        
        sort(heights.begin(), heights.end());
        
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (heights[j] - heights[i] <= d) {
                    count++;
                } else {
                    break; // Sorted hai koi zrurat nhi aage dekhne ki
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
