#include <iostream>
using namespace std;

int countPrimes(int n)
{
    vector<bool> prime(n + 1, true);
    int count = 0;
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            count == 1 ?  cout << i  : cout <<", "<< i;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }

    return count;
}

int main()
{
    // segmented sieve
    // call for count prime

    return 0;
}