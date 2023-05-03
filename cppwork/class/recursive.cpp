#include<iostream>
using namespace std;

 char myRev(char* arr){
 	if(*arr=='\0'){
 		return 0;
	 }else{
	 	myRev(arr+1);
	 	cout<<*arr;
	 }
	 
 }
int main(){
	char arr[]="marthe";
	myRev(arr);
  return 0;
}