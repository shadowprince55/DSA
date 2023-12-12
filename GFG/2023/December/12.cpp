class Solution{
public:
    
    int help(vector<vector<int>>& M,int n,int m, int i, int j, vector<vector<int>>& memo){
        if(j==m-1)
            return M[i][j];
            
            if(memo[i][j]!=-1)
                return memo[i][j];
        
        int a=0,b=0,c=0;
        
        if(i-1>=0 & j<m)
            a = M[i][j] + help(M,n,m,i-1,j+1,memo);
            
        if(i+1<n & j+1<m)
            b = M[i][j] + help(M,n,m,i+1,j+1,memo);
            
        if(j+1<m)
            c = M[i][j] + help(M,n,m,i,j+1,memo);
        
        return memo[i][j] = max({a,b,c});
    }

    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        vector<vector<int>> memo(n+1, vector<int>(m+1,-1));
        int ans=0;
        for(int i=0;i<n;i++){
            int a = help(M,n,m,i,0,memo);
            ans = max(a,ans);
        }
        return ans;
    }
};
