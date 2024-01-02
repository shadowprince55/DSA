class Solution{
    public:    
    long long int maxSumWithK(long long int arr[], long long int n, long long int k) 
    {
        long long int sum = 0, ans = INT_MIN, last = 0;
        int i=0, j=0;
        
        while(j<n){
            sum += arr[j];
            
            if((j-i+1)<k){
                j++;
            }
            
            else if((j-i+1) == k){
                ans = max(ans, sum);
                j++;
            }
            
            else if((j-i+1) > k){
                ans = max(ans, sum);
                last += arr[i];
                i++;
                if(last < 0){
                    sum -= last;
                    ans = max(ans, sum);
                    last = 0;
                }
                j++;
            }
        }
        return ans;
    }
};
