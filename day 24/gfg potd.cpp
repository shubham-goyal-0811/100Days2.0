class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        long long int sum=0;
        for(long long int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%3==0)
            return 1;
        else
            return 0;

    }
};