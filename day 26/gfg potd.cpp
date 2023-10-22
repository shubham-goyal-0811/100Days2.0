int mod = 1e9 + 7;
    
    
        long long nCrModp(int n, int r) {
            if (r == 0)
                return 1;
        
            long long p = mod;
        
    
            long long res = 1;
        
    
            for (int i = 0; i < r; i++) {
                res = (res * (n - i)) % p;
                res = (res * modInverse(i + 1, p)) % p;
            }
        
            return res;
        }
    
    
        long long modInverse(long long a, long long m) {
            long long m0 = m;
            long long y = 0, x = 1;
        
            if (m == 1)
                return 0;
        
            while (a > 1) {
    
                long long q = a / m;
                long long t = m;
        
    
                m = a % m, a = t;
                t = y;
        
    
                y = x - q * y;
                x = t;
            }
        
    
            if (x < 0)
                x += m0;
        
            return x;
        }
    
    
        long long numberOfPaths(int M, int N) {
            return nCrModp(M + N - 2, min(M - 1, N - 1));
        }