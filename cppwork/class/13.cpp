#include <bits/stdc++.h>
using namespace std;
  int quotient(int a, int b){
   return a / b;
   }
  int remainder(int a, int b){
   return a % b;
  }
  int main(){
    int num1, num2, quot, rem;
    cout <<"Enter dividend: ";    
    cin>> num1;
    cout<<"Enter divisor: ";    
    cin>> num2;  
    quot= quotient(num1, num2); 
    rem = remainder(num1, num2);
    cout<<"Quotient is: "<< quot <<endl;    
    cout<<"Remainder is: "<< rem;
    return 0;
}