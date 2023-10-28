    int count_set_bits(int i){
        int count = 0;
        while(i>0){
            count+=(i&1);
            i = i/2;
        }
        return count;
    }
	int is_bleak(int n)
	{
	    for(int i = n-30;i<=n;i++){
	        if(i+count_set_bits(i) == n){
	            return 0;
	        }
	    }
	    return 1;
	}