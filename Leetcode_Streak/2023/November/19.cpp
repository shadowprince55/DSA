// https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/?envType=daily-question&envId=2023-11-19

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int res=0, sz = nums.size();
        sort(begin(nums), end(nums));
        for(int i=sz-1;i>0;--i){
            if(nums[i]!=nums[i-1])
                res+=sz-i;
        }
        return res;
    }
};
