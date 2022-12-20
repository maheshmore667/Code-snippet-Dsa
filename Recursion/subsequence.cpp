#include <bits/stdc++.h> 

using namespace std; 

void solveSubSequence(string str, vector<string>& ans, string output, int index) {
    //base case 
    if(index >= str.length()) {
        if(output.length() > 0) {
            ans.push_back(output);
        }
         return ;
    }
    
    //exclude 
    solveSubSequence(str, ans, output, index+1);
        
    //include
    char element = str[index];
    output.push_back(element);
    solveSubSequence(str, ans, output, index+1);
   }

   
vector<string> subsequences(string str){
	string output ="";
    vector<string> ans;
    solveSubSequence(str, ans, output, 0);
    return ans;
}