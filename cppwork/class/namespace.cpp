#include<iostream>
using namespace std;
 namespace first{
 	int amount=5000;
 }
 int amount=2000;
   int main(){
   	string amount ="My money";
   	
   	cout<<first::amount<<"\n";
   	cout<<::amount<<"\n";
   	cout<<amount<<"\n";
   	
   	
   	return 0;
   }
   