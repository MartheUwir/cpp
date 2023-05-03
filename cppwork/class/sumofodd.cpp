#include <iostream>

using namespace std;



int main()
{
    int i;
    int product;

    for ( i = 1; i <=20; i+=2)
    {
        if(i%2!=0)
            product = product * i;
        else
            continue;

    }
    cout << "\n product: " << product;
    return 0;
}