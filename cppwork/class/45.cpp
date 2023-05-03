#include<bits/stdc++.h>
using namespace std;
 	int num1,num2,r,sum1 =0, number1;

  void isDigitSum(int num2, int tsum)
  {}
 int main (){
 	cout <<" Enter number :";
 	cin>>num1;
 	num2=num1;
	           
	
 	while(num1 > 0){
 		r=num1 % 10;
 		num1 = num1 /10;
 		sum1 = sum1 +r;
	 }
	 cout <<" The sum of digits of first number is :" <<sum1 <<endl;
	 cout<<"Enter second number :";                                 
	 cin >> number1;
    
  	
 if (sum1<number1)
  	{
  		return 1;
	  } else if(num2<0) {
	  	return -1;    
	  }else{
	  	return 0;
  }
		  }