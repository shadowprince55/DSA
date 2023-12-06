
class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int ans = 0;
        for (int i = L+1; i < R; i++) {
            std::string str = std::to_string(i);
            std::string target = std::to_string(X);
            ans += std::count(str.begin(), str.end(), target[0]); // Check occurrences of target digit
        }
        return ans;
    }
};
