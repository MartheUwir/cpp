#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string low;
	
	cout << "\nPlease Enter the String to Convert into Uppercase  =  ";
	getline(cin, low);
	
	 transform(low.begin(), low.end(), low.begin(), ::toupper);
	
	cout<< "\nThe Given String in Uppercase = " << low;
		
 	return 0;
}