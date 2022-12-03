#include<iostream>
using namespace std;

string reverseString(int i, int j, string input) {

    if(i > j ){
        return input;
    }

    //detail implementation of swap
    /* char temp ;
    temp = input[j];
    input[j] = input[i];
    input[i] = temp; */

    swap(input[i], input[j]);

    i++; j--;

    return reverseString(i, j, input);
}


int main()
{
 
  string input;
  cout << "Enter the string to reverse " << endl;
  cin >> input;
    //pass by value method
  cout << "Reversed string is : " << reverseString(0, input.length()-1, input) << endl;

  return 0;
}