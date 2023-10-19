//problem link : https://www.codingninjas.com/codestudio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<int> ans;
    ans.push_back(arr[n-2]);
    ans.push_back(arr[1]);

    return ans;
}
