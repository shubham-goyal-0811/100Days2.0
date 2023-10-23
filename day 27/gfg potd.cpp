int i, j, max = 0;  
    int ans[n];  
    for ( i = 0; i < n; i++ )  
        ans[i] = arr[i];  
    for ( i = 1; i < n; i++ )  
        for ( j = 0; j < i; j++ )  
            if (arr[i] > arr[j] &&  
                ans[i] < ans[j] + arr[i])  
                ans[i] = ans[j] + arr[i];  
    for ( i = 0; i < n; i++ )  
        if ( max < ans[i] )  
            max = ans[i];  
    return max;