class Solution{
    #define ll long long
    int mod = 1e9+7;
    
    public:
    
   
    
    long long countWays(int n, int k){
        // code here
       ll dp[n+1];
       dp[0] = 0;
       dp[1] = k;
       dp[2] = static_cast<long long>(k)*k;
       for(int i=3;i<=n;i++){
           dp[i] = ((k-1)*(dp[i-1]+dp[i-2]))%mod;
       }
       return dp[n];
    }
};
