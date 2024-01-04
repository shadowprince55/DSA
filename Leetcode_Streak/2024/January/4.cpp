class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mp;
        for(int n:nums){
            mp[n]++;
        }
        int count = 0;
        for(auto x:mp){
            if(x.second==1)
                return -1;
            
            count += x.second/3;
            if(x.second%3)
                count++;
        }
        return count;
    }
};
