#include<iostream>             
using namespace std;

 void revChar(char *str, int index,int n)
 {
 if(index== n){
 	return;
 }
  char temp =str[index];
  revChar(str, index+1,n);
  cout <<temp;
 }

  int main(){
  	char a[] ="Marthe";
  	int n=sizeof(a)/sizeof(a[0]);
  	revChar(a,0,n);
  	
  	
  	return 0;
  }