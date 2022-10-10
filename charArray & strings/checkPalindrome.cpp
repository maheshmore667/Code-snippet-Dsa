#include <iostream>
#include <cstring>

char toLowerCase(char c) {
    if(c >= 'a' && c <='z'){
        return c;
    } else {
        return c-'A'+'a';
    }
}

bool checkPalindrome(string s)
{
    int start = 0;
   
    string str;
    
    for(int i= 0; i < s.length(); i++){
      if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')||(s[i] >= '0' && s[i] <= '9')){
      str.push_back(s[i]);
    }
   }
     int end = str.length()-1;
    while(start <= end) {
        if(toLowerCase(str[start]) == toLowerCase(str[end])){
           start++;
           end--;
        } else {
            return 0;
        }
      }
        
    return 1;
}