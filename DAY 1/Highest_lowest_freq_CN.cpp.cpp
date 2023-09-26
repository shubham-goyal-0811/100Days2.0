#include <bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    int n = v.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for (auto it : mpp) {
        if (max < it.second) {
            max = it.second;
        }
        if(min> it.second){
            min=it.second;
        }
    }
    vector<int> ans;
    for (auto it : mpp) {
        if (it.second == max) {
            ans.push_back(it.first);
            break;
        }
        
    }
    for (auto it : mpp) {
        if(it.second==min){
            ans.push_back(it.first);
            break;
        }
    
    }
    return ans;
}
int main() {
    int n; // size of array
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> result = getFrequencies(v);

    cout << "Most frequent element and least frequent Element";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}


