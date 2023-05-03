#include<iostream>
using namespace std;
int main(){
	string name;
	int principal;
	int rate;
	int time;
	float interest;
	float amount;
	
  cout<<"Enter your full names:";
  getline(cin,name);
  cout<<"Enter Initial amount:";
  cin>>principal;
  cout<<"Enter rate per %:";
  cin>>rate;
  cout<<"Enter time:";
  cin>>time;
  
  interest=(principal*rate*time)/100;
  cout<<"My names are"<<name;
  amount=interest+principal;
  cout<<"Entered principal amount:"<<principal <<endl;
  cout<<"Entered rate is:"<<rate <<endl;
  cout<<"Entered time is :" <<time <<endl;
  cout<<"Compound interest is :"<<interest <<endl;
  cout<<"Then final total amount is:"<<amount<<"Rwf";
  
  
	
}