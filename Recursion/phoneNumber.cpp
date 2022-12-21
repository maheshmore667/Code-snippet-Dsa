private:
   void combinationOfPhoneNumber(string digits, string mapping[], vector<string>& ans,
    string output, int index) {
        //base condition
        if(index >= digits.length()) {
            if(output.length() > 0){
                ans.push_back(output);
            }
            
            return;
        }
        int digit = digits[index] - '0';
        string value = mapping[digit];

        for(int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            combinationOfPhoneNumber(digits, mapping, ans, output, index+1);
            output.pop_back();
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
        string mapping[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string output;
        combinationOfPhoneNumber(digits, mapping, ans, output, 0);
        return ans;
    }