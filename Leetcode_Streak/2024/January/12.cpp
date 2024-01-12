class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int c1=0,c2=0;
        for(int i=0;i<s.size()/2;i++){
            for(int j=0;j<vowels.size();j++){
                if(s[i]==vowels[j]){
                    c1++;
                    break;
                }      
            }
        }
        for(int i=s.size()/2;i<s.size();i++){
            for(int j=0;j<vowels.size();j++){
                if(s[i]==vowels[j]){
                    c2++;
                    break;
                }      
            }
        }
        if(c1==c2)
            return 1;
        else    
            return 0;
        
    }
};
