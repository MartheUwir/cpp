#include<iostream>
using namespace std;
  int main(){
//  	int value =65;
//  	char letter='B';
//  	cout<<"The following is display of formatted output:"<<endl;
//   cout<<"Decimal : "<<dec<<value<<endl;
//   cout<<"Octal : "<<oct<<value<<endl;
//   cout<<"Hexadecimal : "<<hex<<value<<endl;
   
   int n1 = 5, n2 = 10, max;
  max = (n1 > n2) ? n1 : n2;
  cout << "Largest number between " << n1 << " and " << n2 << " is "<< max;
   return 0;
  	
  }