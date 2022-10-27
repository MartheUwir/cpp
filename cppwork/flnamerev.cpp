#include<iostream>
using namespace std;
 
 void reverseName( string firstName, string lastName){
 	
  
 }

 int main(){
 	 string firstName;
 	 string lastName;
 	 string marthe;
 	cout<<"Enter your first Name: ";
 	cin>>firstName;
 	cout <<"Enter your last name: ";
 	cin>>lastName;
 	cout<<"Input first name is :" <<firstName<<endl;
 	cout<<"Input last name is :" <<lastName<<endl;
// 	cout<<"Your name are :" <<lastName <<" "<<firstName;
 	marthe = firstName;
 	firstName=lastName;
 	lastName=marthe;
 	cout<<"Your name are :" <<firstName <<" "<<lastName;
 	
 	
 	return 0;
 	
 }