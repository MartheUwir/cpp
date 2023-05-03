#include<iostream>
using namespace std;
 int power(int x,int n){
 	 if(n==0){
 	 	return 1;
	  }
	int smallOut=power(x,n-1);
	return smallOut* x;
 }
 
 int main(){
 	cout<<power(4,2);
 	return 0;
 }