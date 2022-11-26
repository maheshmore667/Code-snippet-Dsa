
#include <iostream>

using namespace std;

void sayDigits(int n,  string nums[]) {
    
    if(n == 0) {
        return;
    }
    
    int digit = n % 10;
    n = n / 10;
    sayDigits(n, nums);
    
    cout << nums[digit] << " ";
    
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    string nums[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    sayDigits(n, nums);

    return 0;
}
