#include<bits/stdc++.h>
using namespace std;
void check(double);
int main()
{
  double number;
  cout << "Enter a Number : ";
  cin >> number;
  check(number);
  
  return 0;
}
void check(double number) 
{
  if (number > 0)
    cout << "Positive" << endl;
  else if(number < 0)
    cout << "Negative" << endl;
  else
    cout << "Zero" << endl;
}