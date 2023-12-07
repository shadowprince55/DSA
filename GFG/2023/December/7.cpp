class Solution{
    public:
    
    long atMost(int a[], int n, int bound){
        long i=0,j=0, cnt=0;
        
        while(j<n){
            if(a[j]<=bound){
                cnt+=(j-i+1);
                j++;
            }
            else{
                j++;
                i=j;
            }
        }
        return cnt;
    }
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        return atMost(a,n,R) - atMost(a,n,L-1);
        
    }
};
