//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		   unordered_map<char, int> count;
		   queue<char> str;
		   string ans;
		   
		   for(int i= 0; i<A.length(); i++){ 
		       char ch = A[i];
		       count[ch]++;
		       str.push(ch);
		       while(!str.empty()) {
		           if(count[str.front()] > 1) {
		               str.pop();
		           } else {
		              ans.push_back(str.front()); 
		              break;
		           }
		       }
		       if(str.empty()) {
		           ans.push_back('#');
		       }
		       
		       
		   }
		   return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends