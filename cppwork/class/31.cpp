#include <iostream>
using namespace std;
int main() {
    int n, i,v;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            cout << i << " ";
    }
  int a[10];    
  cout<<"Enter the number to convert: ";    
 cin>>n;    
 for(i=0; n>0; i++)    
 {    
 a[i]=n%2;    
 n= n/2;  
 }    
  cout<<"Binary of the given number= ";    
 for(i=i-1 ;i>=0 ;i--)    
 {    
  cout<<a[i];  
 }    
    return 0;
 }