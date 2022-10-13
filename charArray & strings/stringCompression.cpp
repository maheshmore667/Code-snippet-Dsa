class Solution {
public:
//must do question
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int ansIndex = 0;
        while(i < n){
            int j = i+1;
            while(j < n && chars[i] == chars[j]) {
                j++;
            }
            //came out when diff char found || array ended
            
            int count = j-i;
            chars[ansIndex++] = chars[i];
            if(count > 1) { 
                string cnt = to_string(count);
                //if( count > 9 ) {
                  for(char ch : cnt) {
                     chars[ansIndex++] = ch;
                  }
               // } else {
                    //chars[ansIndex++] = cnt[0];
               // }
              
            }
            i = j;
        }
        return ansIndex;
    }
};