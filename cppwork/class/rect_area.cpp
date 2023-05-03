#include<iostream>
using namespace std;
int area,length,width;
    int rectArea(int length, int width){
    	area=length*width;
    	cout<<area;
    	return area;
	}
 int main(){
 	cout<<"Enter length of your triangle :";
 	cin>>length;
 	cout<<"Enter its width :";
 	cin>>width;
 	rectArea(width,length);
 	return 0;
 }