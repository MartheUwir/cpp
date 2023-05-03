#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int sum,m, n;
  cout<<"Enter number :";
  cin>>n;
  while (n>0)
  {
  	m=n%10;
  	sum = sum+m;
  	n=n/10;
  }
  cout<<" The sum of number is = "<<sum;
  return 0;
 }