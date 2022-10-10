#include<iostream>

using namespace std;

char maxOccChar(string s) {
    int arr[26] = {0}; //space complexity : constant as array of 26 element
    int index = 0;
    int ans = 0, max = -1;

    //putting count into answer array
    for(int i = 0; i < s.length(); i++) { //time complexity : loop for length of s which can be of length n so O(n)
        index = s[i] - 'a';
        arr[index]++;
    }

    for(int i = 0; i < 26; i++){
        if(max < arr[i]) {
            //max count is optional in question statement
            max = arr[i];
            ans = i;
        }
    }
    return 'a' + ans;
}


int main() {
    string s;
    cout << "Enter the string" << endl;
    cin >> s;

    //If needed we can develop code of lowercase/uppercase

    cout << "Max occurred character is : " << maxOccChar(s);
}