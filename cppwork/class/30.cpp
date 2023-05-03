#include <bits/stdc++.h>
using namespace std;
 

void reverseStr(string& str)
{
    int n = str.length();
    int i;
 
    
    for ( i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
 

int main()
{ 
    string str = "Uwiringiyimana ";
    reverseStr(str);
    cout << str;
    return 0;
}