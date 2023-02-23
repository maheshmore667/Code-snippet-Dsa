#include<iostream>
#include<stack>

using namespace std;

int main() {
    string s = "Mahesh";
    stack<char> name;
    string ans = "";
    for(int i = 0; i < s.length(); i++) {
        name.push(s[i]);
    }
    while(!name.empty()) {
        ans.push_back(name.top());
        name.pop();
    }

    cout << "answer is : " << ans << endl;
    return 0;

}