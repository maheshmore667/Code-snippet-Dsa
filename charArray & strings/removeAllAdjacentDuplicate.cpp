class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        
        while(i<s.length()) {
            
            if(s[i] == s[i+1] && i <= s.length()) {
                
                s.replace(i,2,"");
                 i==0 ? i=0 : i--;
            } else  {
                 i++;
            }
            
        }
        return s;
    }
};