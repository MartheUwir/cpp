#include<iostream>
using namespace std;
//initially zero //The function has return type of void
void count(int a[],int n,int x,int i, int &ans){
//Base case
if(i==n){
return;
}
if(a[i]==x){
ans++;
}
count(a,n,x,i+1,ans);
}
int main(){
int a[] = {5,5,6,5,6,7};
int ans = 5;
count(a,6,10,0,ans);
cout<<ans<<endl;
return 0;
}