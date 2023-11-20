string read(int n, vector<int> arr, int target)
{
    // Write your code here.
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j = i ; j<n;j++){
            if(arr[i]+arr[j]==target)
                return "YES";
        }
    }
    return "NO";
}
