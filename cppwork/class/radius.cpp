#include<iostream>
using namespace std;
    
    int main(){
    	const double PI=3.14159265;
    	float radius;
    	float area;
    	float circum;
    	cout<<"Enter the radius of your circle:" <<endl;
    	cin>>radius;
    	circum =2*PI*radius;
    	area = radius*radius*PI;
    	cout<<"Circumference of your circle is :\n"<<circum <<endl;
    	cout<<" Your area is :"<<area;
    	return 0;
    	
	}