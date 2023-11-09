    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int ansindex=-1;
        int maxc=-1;
        // int count=0;
        for(int i=0;i<N;i++){
            int count = 0;
            for(int j=0;j<N;j++){
                if(arr[j][i]==0){
                    count++;
                }
            }
            if(count>maxc){
                maxc=count;
                ansindex=i;
            }
            
        }
        return maxc>0?ansindex:-1;
        
        
    }