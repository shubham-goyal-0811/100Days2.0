string left = str1;
        string right = str2;
        // string temp = str1;
        // left rotated string by two place
        int i = 2;
        while(i--){
            for(int j = 0;j<str2.length()-1;j++){
                swap(str1[j],str1[j+1]);
            }
            for(int k = left.length()-1;k>0;k--){
                swap(left[k],left[k-1]);
            }
        }
        if(str1 == str2 || left == right){
            return true;
        }
        return false; // gfg++;