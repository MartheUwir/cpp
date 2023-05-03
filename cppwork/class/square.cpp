#include<iostream>
using namespace std;
int x,square;
  int myGlobal(int x){
  	square = x*x;
  	cout<<"the square of "<<x<<" is :"<<square;
  	return 0;
  }
  int main(){
   cout<<"Enter a number :";
   cin>>x;
    myGlobal(x);
   return 0;
  }
 