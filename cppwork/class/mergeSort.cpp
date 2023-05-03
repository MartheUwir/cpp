#include<iostream>
using namespace std;
 void merge(int input[], int begin,int mid, int end){
 	int output[end-begin+1];
 	int i=begin;
 	int j=mid+1;
 	int k=0;
 	
 	while(i<=mid && j<end){
 		if(input[i]<input[j]){
 			output[k]=input[i];
 			i++;
 			k++;
		 }
		 else{
		 	output[k]=input[j];
		 	j++;
		 	k++;
		 }
	 }
	 while(i<=mid){
	 	 output[k]=input[i];
	 	 i++;
	 	 k++;  
	 	 
	 }
	 while(j<=end){
	 	output[k]=input[j];
	 	j++;
	 	k++;
	 }
	 int m=0;
	 for(int i=begin;i<=end;i++){
	 	input[i]=output[m];
	 	m++;
	 }
  }
  void mergeSort(int input[], int beginIndex, int endIndex){
   if(beginIndex>=endIndex){
   	return;
   }
   int mid=beginIndex+endIndex/2;
   mergeSort(input,beginIndex,mid);
   mergeSort(input,mid+1,endIndex);
   merge(input,beginIndex,mid,endIndex);
 }
 
  int main(){
   	int arr[]={4,2,6,3,7,5};
   	mergeSort(arr,0,5);
   	for(int i=0;i<6;i++){
   		cout<<arr[i];
   		cout<<"this is my array";
	   }
   }