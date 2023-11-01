    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        map <int,int> mpp;
        for(auto x : arr)
            mpp[x]++;
        for(int i=0;i<N;i++){
            arr[i]=mpp[i+1];   
        }
    }
