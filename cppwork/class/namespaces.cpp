#include<iostream>

namespace userDefined{
	int insideUserDefined = 6;
	int cout(){
		return insideUserDefined;
}
	
		
	}
	int myGlobal = 9;
	int cout(){
		return myGlobal * myGlobal;
	}
	int main(){
		int cout = 8;
		std::cout<<"Local variable cout in main is"<<cout<<"\n";
		std::cout<<"Variable in userDefined namespace is"<<userDefined::insideUserDefined<<"\n";
	    std::cout<<" output of cout() in userDefined is"<<userDefined::cout()<<"\n";
		std::cout<<" value of myGlobal is"<<myGlobal<<"\n";
	    std::cout<<" output of global cout() is"<<::cout()<<"\n";
	    return 0;
	    
	}