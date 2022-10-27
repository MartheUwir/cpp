#include<iostream>
#include<cmath>
using namespace std;
 int main(){
 	float PI=3.14; 
 	float volume;
 	int radius;
 	
    cout <<"Enter radius of given sphere: ";
    cin>>radius;
    volume = (radius * radius *radius *PI*4)/3;
    cout <<"The volume of your sphere is : ";
	cout<<volume<<" Cubic unit";
    return 0;
 }