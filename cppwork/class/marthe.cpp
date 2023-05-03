#include<iostream>
using namespace std;
int i,j;
 int oddValent(int arr[])
{
	for(i=0;i<5;i++)
	{	
	for(j=i+1;j<5;j++)
	{
   if(arr[i] == arr[j] && arr[i] %2 ==1){
		return 1;	
	}else{
		return 0;
	}
	}
  }
 }



 int main(){
		int arr[10];
	int i,j;
	cout<<"Enter elements: ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}

	int result =oddValent(arr);
	cout<<result;
	
//	return 0;
}