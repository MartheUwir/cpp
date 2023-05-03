#include<bits/stdc++.h>
using namespace std;

 class Rectangle{
 	 int width, height;
 public :
  void setValues(int ,int ){
 	    int area() {return width height;}
		 };
		 
  void Rectangle::setValues(int x, int y){
  	  width = x;
  	  height =y;
  	  
  }

 int main(){
 	Rectangle rect;
 	
 	Rectangle *rc =new Rectangle();
    Rectangle r= Rectangle(10,50);
    Rectangle Arc= new Rectangle(20,40);
 	rect.setValues (3,4);
 	cout << "The area: "<<rect.area();
 	cout<< "The area of arc: " <<Arc;
 	cout<< "The area of r: " <<r<<endl;
 	cout<< "The rc" <<rc<<endl;
 	return 0;
 }