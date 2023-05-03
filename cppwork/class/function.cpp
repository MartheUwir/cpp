#include<iostream>
using namespace std;
 int a,b,sum;
 int addNumbers(int a ,int b){
 	sum= a+b;
 	return sum;
 cout<<"Sum is "<<sum;
 }
 
 int main(){
 	cout<<"Enter number one :";
 	cin>>a;
 	cout<<"Enter number two :";
 	cin>>b;
 	
 	addNumbers(a,b);
 		
 	return 0;
 }