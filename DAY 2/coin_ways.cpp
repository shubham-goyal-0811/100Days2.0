#include <bits/stdc++.h>
using namespace std;

int nways(int arr[], int n, int x, int currPos) {
    if (currPos > x)
        return 0;
    if (currPos == x)
        return 1;
    int sum = 0;
    for (int i = 0; i < n; i++) { 
        sum += nways(arr, n, x, currPos + arr[i]);
    }
    return sum;
}

int main() {
    int n; // number of coins
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;
    int ans = nways(arr, n, x, 0);
    cout << ans;
}
