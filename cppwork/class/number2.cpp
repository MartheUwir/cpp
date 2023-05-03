#include<iostream>
using namespace std;

int main(){
    char A;
    char B;
	
	int marks;
	cout<<" Enter marks of student :";
	cin>>marks;
	cout<<(marks>10)&&(marks<21)? 1:0;
	cout <<(marks>=16)&&(marks<21)? cout<<"you have got grade A":
	cout <<(marks>14)&&(marks>16)? cout <<"You have grade B":
	cout <<(marks>10)&&(marks<14)? cout<<"You are in grade C":
	cout <<(marks<10)?:cout<<"Grade D";
	return 0;
	
	
	
}