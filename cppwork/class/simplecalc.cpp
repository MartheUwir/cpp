# include <iostream>
#include <cmath>
using namespace std;

int main() {
   start:
  char op;
  int num1, num2;
  cout << "Choose operator: "<<endl;
  cout<<" 1. Add " <<endl;
  cout<<" 2. Subtract " <<endl;
  cout<<" 3. Multiply " <<endl;
  cout<<" 4. Divide " <<endl;
  cout<<" 5. Modulus " <<endl <<"Enter it here :";
  cin >> op;
 
  
  
  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '1':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '2':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '3':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '4':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
    
    case '5':
      cout << num1 << " % " << num2 << " = " << num1 % num2<<endl;
      break;

    default:
      
      cout << "Error! operator is not correct" <<endl;
      break;
  } 
   if(op==false){
  	cout<<"Enter operator again:"<<endl;
  
  }else {
  	cout<<"Do you wanna play again ? y / n : ";
  	char choice;
  	cin>>choice;
  	switch (choice){
  	case 'Y':
  		goto start;
  		
  	case 'N':
  		return 0;
  	}
  }

  return 0;
}
