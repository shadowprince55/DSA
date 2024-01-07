olution {
  public:
    bool isValid(int arr[], int ris, int k, int n){
        int sum = 0, count = 1;
        for(int i=0;i<n;i++){
            if(sum+arr[i]<=ris){
                sum += arr[i];
            }
            else{
                sum = arr[i];
                count ++;
            }
        }
        return count <= k;
    }
  
    int splitArray(int arr[] ,int N, int K) {
        int ts = 0, mx = INT_MIN;
        for(int i=0;i<N;i++){
            ts += arr[i];
            mx = max(mx, arr[i]);
        }
        
        int lo = mx, hi = ts, ans = INT_MAX;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(isValid(arr, mid, K,N)){
                ans = min(ans, mid);
                hi = mid - 1;
            }
            else{
              lo = mid+ 1;  
            }
        }
        return ans;
        
    
    }
};
