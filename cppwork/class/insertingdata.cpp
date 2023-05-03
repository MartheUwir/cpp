#include<iostream>
using namespace std;
int main(){
	string name;
	int age;
	cout<< "Enter you name:";
	cin.ignore();
	getline(cin,name);
	cin>>name;
	cout<<"Enter age";
	cin>>age;
	cout<<" My name is "<<name <<" And I am " <<age <<"Years old";
	return 0;
}