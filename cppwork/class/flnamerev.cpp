#include<iostream>
using namespace std;
     string firstName;
 	 string lastName;
 	 string marthe;
 void reverseName( string firstName, string lastName){
 	marthe = firstName;
 	firstName=lastName;
 	lastName=marthe;
  
 }

 int main(){
 	 
 	cout<<"Enter your first Name: ";
 	cin>>firstName;
 	cout <<"Enter your last name: ";
 	cin>>lastName;
 	cout<<"Input first name is :" <<firstName<<endl;
 	cout<<"Input last name is :" <<lastName<<endl;
    //cout<<"Your name are :" <<lastName <<" "<<firstName;
 	
 	cout<<"Your name are :" <<firstName <<" "<<lastName;
 	
 	
 	return 0;
 	
 }