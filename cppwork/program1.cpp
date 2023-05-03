#include<bits/stdc++.h>
using namespace std;
	
	struct rectangle {
		int width;
		int height;
		int area(){
			return width*height;
		}
	};	
	 int main(){
	 	rectangle rect;
	 	rect.width=50;
	 	rect.height=30;
	 	cout<<"Area : "<<rect.area();
	 }