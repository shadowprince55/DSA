class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        map<char, int> mp;
        for(int i=0;i<s.size();i++){
            if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z'))
                continue;
                
            
            else{
                char a = tolower(s[i]);
                mp[a] ++;
            }
             
            
        }
        if(mp.size() == 26)
            return true;
        else
            return false;
    }

};
