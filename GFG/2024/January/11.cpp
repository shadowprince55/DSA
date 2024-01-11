class Solution {
  public:
    string removeKdigits(string num, int K) {
        string answer = "";
        for(char &ch:num){
            while(answer.size() and answer.back()>ch and k){
                answer.pop_back();
                k--;
            }
        if(answer.size() or ch!='0')
            answer.push_back(ch);
            
        }
        while(answer.size() and k--)
            answer.pop_back();
            
        if(answer=="")
            return "0";
        return answer;
        
    }
};
