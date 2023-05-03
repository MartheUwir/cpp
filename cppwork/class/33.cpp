#include<iostream>
using namespace std;

  int main(){
	unsigned long n,i,sum=0,d,sq,diff,k;
	cout <<" Enter any number : ";
	cin>>n;
	
	for(i=1;i<=n;++i){
		d=i*i;
		sum+=d;
		k +=i;
		
	}
	sq=k*k;
	diff =sq-sum;
	cout<<"sum  of their squares= "<<sum<<endl;
	cout<<"square of their sum = "<<sq<<endl;
	cout<<"Difference = " <<diff;
	return 0;
}