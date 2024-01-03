class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int n = S.size();
        int a = -1, b = -1, c = -1;
        int res = INT_MAX;
        if(n>=3)
            for(int i=0;i<n;i++){
                if(S[i]=='0')
                    a = i;
                if(S[i]=='1')
                    b = i;
                if(S[i]=='2')
                    c = i;
                if(a!=-1 && b!=-1 && c!=-1)
                    res = min(res, max(a, max(b,c)) - min(a, min(b,c)) + 1);
            }
            return res == INT_MAX?-1:res;
    }
};
