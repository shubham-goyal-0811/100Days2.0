/*My rowards needs an ecryption method , So Eliot was there to help himn at the same time lichad wrote a paper on encryption.Eliot then started writing his algorithms with the help of paper from lichad, But he need my help in implementation Given an input string encrypted string will start with the middle character of the string and will be formed hence forth with the middle character of left and right substring.*/

#include <bits/stdc++.h>
using namespace std;

string ans; 

void encryption(char arr[], int start, int end) {
    if (start > end)
        return;
    int mid = (start + end) / 2;
    ans.push_back(arr[mid]);
    encryption(arr, start, mid - 1);
    encryption(arr, mid + 1, end);
}

int main() {
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    encryption(arr, 0, n - 1);

    cout << ans << endl; 
    return 0;
}
