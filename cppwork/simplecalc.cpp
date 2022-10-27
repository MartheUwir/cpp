# include <iostream>
#include <cmath>
using namespace std;

int main() {

  char op;
  int num1, num2;
  int nber1, nber2;
  cout << "Choose operator: ";
  cout<<" + " <<endl;
  cout<<" - " <<endl;
  cout<<" * " <<endl;
  cout<<" / " <<endl;
  cout<<" % " <<endl <<"Enter it here :";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
    
    case '%':
      cout << num1 << " % " << num2 << " = " << num1 % num2;
      break;

    default:
      
      cout << "Error! operator is not correct" <<endl;
      break;
  } 
  if(op!=true){
  	
  	cout<< "enter operator again :";
  	cin>> (op);
   switch(op);
    
  }

  return 0;
}
