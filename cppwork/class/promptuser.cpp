#include<bits/stdc++.h>

using namespace std;
  int main(){
 	int numberOfInput;
 	int n;
 	int sum;
 	cout<<"How many numbers are you going to enter?:";
 	cin>>numberOfInput;
 	
 	if(numberOfInput>0){ 
 		cout<<"Enter here number:";
 		cin>>n;
 		 		
	 }else if(numberOfInput<=0){
	 	cout<<"Please re- enter the number by going to the correct label";
	 }
 	sum = n++;
 	if(n=1){
 		cout<<"correctly entered sum of numbers are: "+n<<endl;
	 }
	cout<<"Entered number of numbers is: "+numberOfInput;
	cout<<"Entered numbers are:"+n;
	cout<<"Sum of numbers is ="+sum;
	
	return 0;
	 
 	
   