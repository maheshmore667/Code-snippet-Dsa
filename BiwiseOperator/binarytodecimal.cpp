#include <iostream>
#include <math.h>

using namespace std;

int binaryToDecimal(int n)
{
    int answer = 0;
    int bit;
    int i=0;
    while(n!=0) {
        bit = n % 10;
        answer = bit * pow( 2 , i) + answer;
        i++;
        n = n/10;

    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    cout << "Decimal  : " << binaryToDecimal(n);

    return 0;
}