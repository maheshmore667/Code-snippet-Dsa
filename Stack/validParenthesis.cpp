bool isValidParenthesis(string expression)
{
    stack<char> parenthesis;
    for(int i=0; i <expression.length(); i++ ) {
        //if opening then push
        char ch = expression[i];
        if((ch =='(') ||(ch == '{') || (ch == '[')) {
            parenthesis.push(ch);
        } else { 
            if(!parenthesis.empty()) {
                char top = parenthesis.top();
                if ((top == '(' && ch == ')') || 
                (top == '{' && ch == '}') ||
                (top == '[' && ch == ']')) {
                  parenthesis.pop();
                } else {
                  return false;
                }

            } else {
                return false;
            }
           
        }
    }

    if(parenthesis.empty()) {
        return true;;
    } else {
        return false;
    }
}