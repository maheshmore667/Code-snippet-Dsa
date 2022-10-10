class Solution {
private : 
    bool checkMatches(int a[], int b[]){
        for(int i=0; i<26; i++){
            if(a[i] != b[i] ){
                return false;
            }
        }
        
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0}; // string1 mapping
        for(int i=0; i<s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }
    
        int count2[26] = {0}; // string2 mapping
        
           
      
        //first check
        int i=0;
        int windowSize = s1.length();
        while(i < windowSize && i < s2.length()){
             int index = s2[i] - 'a';
             count2[index]++;
             i++;
        }
    
        //check for first window if it matches
    
        if(checkMatches(count1, count2)){
            return true;
        }
    
        while(i < s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;

              index = s2[i - windowSize] - 'a';
             count2[index]--;
            
             if(checkMatches(count1, count2)){
                    return true;
             }
            i++;
        }
        
      return false;  
        
    }
};