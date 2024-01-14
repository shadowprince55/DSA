
class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        unordered_map<string, int> m1;
        vector<int> ans;
        
        for(int i=0;i<M;i++){
            string s = "";
            for(int j=0;j<N;j++){
                s+=to_string(matrix[i][j]);
            }
            if(m1[s]!=0)
                ans.push_back(i);
            m1[s]++;
        }
        return ans;
      
    } 
};
