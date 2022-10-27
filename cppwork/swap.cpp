#include <iostream>
#include <cmath>
 using namespace std;
 int main(){
  int num1 = 40;
  int num2 = 70;
  char marthe;
  
//  cout<<"=====JUST BEFORE SWAPPING  OUTPUT NUMBERS WAS =========="<<endl;
  cout << "Input first number = "<<num1 <<endl;
  cout <<"Input second number = "<<num2 <<endl;
//  cout<<"------OUTPUT AFTER SWAPPING-----"<<endl;
  marthe= num1;
  num1=num2;
  num2=marthe;
  cout << "After sawpping the first number is  = "<<num1 <<endl;
  cout <<"After swapping the second number is  = "<<num2 <<endl;
  
  return 0;
  
  
  
 }