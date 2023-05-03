#include<bits/stdc++.h>
using namespace std;
int main(){
	float score =15.5;
	float p=7.5;
	float * ptr=&score;
	(*ptr)=p;
	cout<<*ptr <<" "<<score<<" " <<p;
	return 0;

 int b=10;
 int *a=&b;
 b=20;
 *a=5;
 cout<<b;
 cout<<",";
 cout<<*a;
 int arr[6] = {5,2,4,7,8,1};
 cout<<*arr;
}