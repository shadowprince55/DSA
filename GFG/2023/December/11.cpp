class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long int res=0,sum=0;
        for(int i=0;i<N;i++){
            if(i<K)
                sum+= Arr[i];
            else{
                res = max(res,sum);
                sum+= Arr[i];
                sum-= Arr[i-K];
            }
        }
        res = max(res,sum);
        return res;
    }
};
