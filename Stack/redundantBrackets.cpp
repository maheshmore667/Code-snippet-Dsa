#include <bits/stdc++.h> 
#include<stack>
bool findRedundantBrackets(string &s)
{
    stack<char> mystack;

    for(int i=0; i< s.length(); i++) {
        char ch = s[i];
        if(ch == '('||ch == '/'||ch == '*'||ch == '-'||ch == '+') {
            mystack.push(ch);
        } else {
            if(ch ==')'){
            bool isRedundant = true;
            while(mystack.top() != '(') {
                char top = mystack.top();
                if(top == '/'||top == '*'||top == '-'||top == '+') {
                    isRedundant = false;
                }
                mystack.pop();
                
            }
            if (isRedundant == true) {
              return true;
            }

            mystack.pop();
        }
    }
    }

    return false;
}
