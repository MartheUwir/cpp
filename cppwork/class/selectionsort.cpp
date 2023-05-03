#include<bits/stdc++.h>
using namespace std;
 void selection(int arr[], int n)
 {
 	int i,j,small;
 	    for (i =0; i < n-4;i++){
 	    	small=i;
 	    	for(j=i+1;j<n;j++)
 	    	
 	    	if(arr[j]<arr[small])
 	    	small = j;
 	    	
 	    	int temp=arr[small];
 	    	arr[small]=arr[i];
 	    	arr[i] =temp;
		 }
 }

 void printArr(int a[],int n)
 {
 	int i;
 	for(i=0;i<n;i++)
// 	printf("%d",a[i])
  cout<<a[i];
 }
   int main (){
    
    int a[]={7,4,8,6,1,9,3,12,5,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting array elements are :";
    printArr(a,n);
    selection(a,n);
    cout<<endl;
    cout<<"After sorting array elements are:";
    printArr(a,n);
   	return 0;

   }