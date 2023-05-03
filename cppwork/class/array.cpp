#include<iostream>
#include<bits/stdc++.h>
using namespace std;
	 
 
int main(){
    int index;
	
   int scores[10] {52, 78, 75, 68, 88, 63, 75, 90,78};
     int item =10, k=3, len=9, j=len-1;
     while (j>=k){
     	
     	SET scores[j+1]= scores[j];
     	j--;
	 }
	 
	 for (int i=0;i<scores.length();index++){
	 	cout <<scores[index]<<endl;
	 }
	
	
	
}