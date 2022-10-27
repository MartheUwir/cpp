#include <bits/stdc++.h>
using namespace std;
    string name;
    int age;
    void strings(string name,int age){
    
    	cout<<"Your name is :"<<name <<endl;
    
    	cout<<"you are "<<age <<" Years old";
	
   }
   
   int main(){
   	cout<<"Enter you names here :";
   	getline(cin,name);
   	cout<<"How old are you : ";
   	cin>>age;
   	strings(name,age);
   	

   }
