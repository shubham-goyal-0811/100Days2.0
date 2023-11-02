    int minDist(int arr[], int n, int x, int y) {
        // code here
        int minDis=INT_MAX;
        int lasi=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==x or arr[i]==y){
                if(lasi!=-1 and arr[lasi]!=arr[i])
                    minDis=min(minDis,i-lasi);
                lasi=i;
            }
            
        }
        if(minDis==INT_MAX)
            return -1;
        return minDis;
    }
