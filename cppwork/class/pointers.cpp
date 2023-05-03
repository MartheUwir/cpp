#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int arr[6]={5,2,4,7,8,1};
 	int *p=arr;
 	int i;
 	for(i=0;i<6;i++)
 	{
 		cout<<"The address of arr[" <<i<<"]=";
 		cout<<&arr[i]<<endl;
 		
	 }
	 for (i=0;i<6;i++){
	 	cout<<"the value of address of element at [" <<i<< "]";
	 	cout<<p+i<<endl;
	 }
	 return 0;
 }