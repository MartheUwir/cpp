#include<bits/stdc++.h>
using namespace std;
 char removeX(char *input) {
    if (input[0] == '\0')
        return 0;

    if (input[0] == 'x') {
        memmove(input, input + 1, strlen(input + 1) + 1);
        removeX(input);
    } else {
        removeX(input + 1);
    }
}
int main(){
 char inpu[]={'s','x','f','x'};
 cout<< removeX(inpu);
// cout<<me;
	return 0;
	
}