#include<iostream>
using namespace std;
  int main(){
  	
  	char ch;
  	cout << "Enter any character :.";
  	cin>>ch;
  	
  	if ((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'z')){
  		cout << ch << " Is an alphabet";
	  }
	else if (ch >= '0' && ch <= '9'){
		cout << ch << "Is a digit";
	}

	return 0;
  }