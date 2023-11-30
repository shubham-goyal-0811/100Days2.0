vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    int n = a.size();
    int freq[n+1]={0};
    vector<int> ans;
    for(auto x : a){
        freq[x]++;
    }
    for(int i = 1;i<=n;i++ ){
        if(freq[i]==2){
            ans.push_back(i);
        }
    }
    for(int i = 1;i<=n;i++ ){
        if(freq[i]==0){
            ans.push_back(i);
        }
    }
    return ans;
}
