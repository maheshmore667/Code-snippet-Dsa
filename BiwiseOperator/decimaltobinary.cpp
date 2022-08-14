#include <iostream>
#include <math.h>

using namespace std;

int decimalToBinary(int n)
{
    int answer = 0;
    int bit;
    int i=0;
    while(n!=0) {
        bit = n & 1;
        answer = (bit * pow( 10, i)) + answer;
        n = n>>1;
        i++;
        

    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    cout << "Binary  : " << decimalToBinary(n);

    return 0;
}