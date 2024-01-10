class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    map<int,int>mp;
	    int ans = 0, sum = 0, rem = 0;
	    mp[0] = -1;
	    for(int i=0;i<n;i++){
	        sum += arr[i];
	        rem = sum%k;
	        if(rem<0){
	            rem += k;
	        }
	        if(mp.find(rem)!=mp.end()){
	            int len = i-mp[rem];
	            ans = max(ans,len);
	        }
	        else{
	            mp[rem]=i;
	        }
	    }
	    return ans;
	}
};
