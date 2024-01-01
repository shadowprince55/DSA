

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        if(n%2 != 0)
            return 0;
        
        map<int, int> mp;
        
        for(int i=0;i<n;i++){
            int curr = nums[i]%k;
            int need = (k-curr)%k;
            
            if(mp.find(need)!=mp.end()){
                mp[need]--;
                
                if(mp[need]==0)
                    mp.erase(need);
            }
                else
                    mp[curr]++;
            
        }
        if(mp.size()==0)
            return 1;
        return 0;
    }
};
