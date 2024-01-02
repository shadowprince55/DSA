class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int> mp;
        for(auto & x:nums){
            mp[x]++;
        }
        vector<vector<int>>ans;
        while(!mp.empty()){
            vector<int>row;
            for(auto x = mp.begin(); x != mp.end(); ){
                
                row.push_back(x->first);
                if(x->second==1){
                    x = mp.erase(x);
                }
                else{
                    x->second--;
                    ++x;
                }
            }
            ans.push_back(row);
            row.clear();
        }
        return ans;
    }
};
