#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   vector<int> primes = { 2 };
    for (int i = 2; i <= 100; ++i) 
        for (int j = 2; j < i; ++j) {
            if (i % j == 0)
                break;
            if (j == i - 1)
                primes.push_back(i);
        }
    for (int x: primes)
         cout<< x << ' ';
    return 0;
}