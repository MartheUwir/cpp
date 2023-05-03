#include<bits/stdc++.h>
using namespace std;
  int strToint(string str){
  	if(str.length()==1)
  	return (str[0]-'0');
  	double y=strToint(str.substr(1));
  	double x= str[0]-'0';
  	x=x* pow(10, str.length()-1) +y;
  	return int(x);
  }
  int main(){
  	string str ="123456";
  	cout<<(strToint(str))<<endl;
  	return 0;
  }