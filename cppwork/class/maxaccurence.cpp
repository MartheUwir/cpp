#include<iostream>
using namespace std;

 int most(int* arr,int n){
  int maxcount=0;
  int element;
  int i,j;
  for(i=0;i<n;i++){
  	int count=0;
  	for (j=0;j<n;j++){
	  }
	  if(arr[i]==arr[j]){
	  	count++;
	  }
	   if(count>maxcount){
	   maxcount=count;
	   element =arr[i];
	   
	   }
  }
  return element;
}
 int main(){
 	int arr[]={1,6,3,2,3,2,1,3,4,3,4,3};
 	int n= sizeof(arr)/ sizeof(arr[0]);
 	cout<<most(arr, n);
 	
 	return 0;
 }