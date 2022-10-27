#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c,delta;
	float r1,r2;
	cout<<"Enter the coefficients :";
	cin>>a>>b>>c;
	delta=(b*b)-4*a*c;
	if(delta==0)
	{
     cout<<"The roots are equal";
	 r1=r2=-b/(2.0*a);
	 cout<<"The roots are r1=r2="<<r1;		
	}
	else if(delta>0){
		cout<<"r1="<<"and r2="<<r2;
	}else{
		cout<<"The roots are real and imaginary";
		r1=(-b+sqrt(abs(delta))/2.0*a);
		r2=(-b-sqrt(abs(delta))/(2.0*a));
	}
    cout<<"\n The roots are given below \n" ;
	cout<<"r1="<<r1<<"i and r2="<<r2<<"i";
	
 
 }