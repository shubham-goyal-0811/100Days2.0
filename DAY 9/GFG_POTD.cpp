class Solution
{
  public:
  long long int kaam(string s,int k){
    	if (k < 0) return 0;
    
        int i = 0, j = 0, cnt = 0;
        long long int res = 0;
        int m[26] = {0};
    
        while (j < s.length ())
        {
            m[s[j] - 'a']++;
            if (m[s[j] - 'a'] == 1) cnt++;
    
            while (cnt > k)
            {
                m[s[i] - 'a']--;
                if (m[s[i] - 'a'] == 0) cnt--;
    
                i++;
            }
    
            res += (j - i + 1);
            j++;
        }
        return res;
 
  }
    long long int substrCount (string s, int k) {
    	//code here.
    	return kaam(s,k) - kaam(s,k-1);
    	
    }
};
