#include<bits/stdc++.h>
using namespace std;
  int number,result,total=0;
  int coutOnes(int number)
  {
  	cout<<"ENTER ANY NUMBER :";
  	cin>>number;
  	
  	while (number>0){
  		if((number % 2)==0){
  			result =0;
  			cout<<result;
		  }else{
		  	result=1;
		  	cout<<result;
		  } 
		  number =number>>1;
		  total +=result;
	  }
	   cout<<"\n count :" <<total;
	   }
	   int main(){
	   	coutOnes(number);
	   	 return 0;
	   }

  