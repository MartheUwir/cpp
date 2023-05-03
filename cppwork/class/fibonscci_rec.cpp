#include<iostream>
 using namespace std;
 
  int fibon(int n){
  	if(n==0){
  		return 0;
	  }
	if(n==1){
		return 1;
	}

  int first= fibon(n-1);
  int second=fibon(n-2);
  
  return first+second;	
  }
  
  int main(){
  	
  	cout<<fibon(3);
  	return 0;
  }