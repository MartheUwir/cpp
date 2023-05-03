#include<iostream> 
using namespace std; 
 
int main() 
{ 
	int n, isprime = 1, count, i, num=3,prod=2; 
	 
	 
	if(n>=1) 
	{ 
		for (count=2; count<=100 ; ) 
		{ 
			for(i=2; i<=num-1; i++) 
			{ 
				if(num%i==0) 
				{ 
					isprime = 0; 
					break; 
				} 
			} 
	 
			if(isprime) 
			{ 
				prod *= num; 
				count++; 
			} 
	 
		isprime = 1; 
		num++;   	 
		} 
	} 
	 
	cout<<"The roduct of first 100 prime numbers is "<<prod;
}
