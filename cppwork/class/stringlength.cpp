#include<iostream>
using namespace std;
 int main(){
 	 char str[50];
 	 int i,length=0;
 	 
 	 cout<<"Enter the string :";
 	 gets(str);
 	 for(i=0;str[i]!='\0';++i)
 	 {
 	 	length++;
	  }
 	 cout<<"Length of your string is :"<<length <<endl;
 	 return 0;
 }