#include <iostream>
using namespace std;

bool checkPalindrome(int i, int j, string& input) {
    if(i > j ) {
        return true;
    }

    if(input[i] != input[j]) {
        return false;
    } else {
        i++, j--;
         checkPalindrome(i, j, input);
    }

}

int main()
{
 
  string input;
  cout << "Enter the string to check palindrome " << endl;
  cin >> input;
    //pass by value method
  if(checkPalindrome(0, input.length()-1, input)) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  return 0;
}