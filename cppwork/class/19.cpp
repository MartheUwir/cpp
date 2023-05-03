#include<bits/stdc++.h>
using namespace std;

 int main(){
 	int category;
 	int i;
 	string word; 
 	int attempts;
 	const string animals[5] ={"Imbogo","imvubu","impala","crocodile","hynas"};
 	const string books[5]={"moneygame","kwamebook","cambrig","jwak","greenhel"};
 	const string districts[5] ={"Gicumbi","Rulindo","Gasabo","Burera","Kicukiro"};
 	const string filmz[5] = {"Lacasa","Simba","Singham","Surya","Outerbanks"};
 	
 start:
 	cout<<"select category:" <<endl;
 	cout<<"1.animals"<<endl;
 	cout<<"2.books"<<endl;
 	cout<<"3.districts"<<endl;
 	cout<<"4.filmz"<<endl;
 	cout<<"SELECT NUMBER CORRESPONDING TO IT : "; 
	 	
 	const string categories[4]={
	 "animals",
	 "books",
	 
	 "districts",
	 "filmz"
	 };
 	cin >>category;
 	switch (category)
	 {
//     animals
 		case 1:
        srand(time(0));
        word= animals[rand() % 5];
//      books
 		break;
 		case 2:
		 srand(time(0));
        word= books[rand() % 5];
//      districts
		 break;
		case 3:
		srand(time(0));
        word= districts[rand() % 5];
//      filmz
        break;
        case 4:
        srand(time(0));
        word= filmz[rand() % 5];
//      default
        break;
		 default:
		 cout<<" you didn't choose category";
		 break;		
	 }
    
   bool uper(char ch);
   char to_uper(char ch);

    size_t no_left = word.length();
    string attempt = string( no_left, '-');
    cout << ' ' << attempt << '\n';

    char trial_char;
    
    
    while(no_left > 0){
        cout << "Enter word from : " ;
        cin >> trial_char;
        
        for(size_t i = 0; i < word.length(); i++){
            if( to_uper(word[i]) == to_uper(trial_char) && (attempt[i] == '-') ){
                no_left--;
                if( uper(word[i]) )
                    attempt[i] = to_uper(trial_char);
                else
                    attempt[i] = trial_char;
            }
        }
        cout << attempt << '\n';
        if (attempt==word){
        	cout<<"congraturations you won the game!"<<endl;
		}else {
			cout<<" "<<endl;
		}
	
    }
   char option;
  cout<<" do you wat to play again(N/Y) :"  ;
  cin>>option;
  
  if(option=='y')
  {
  	goto start;
  }
 else
 {
 	goto terminate;
 }
 terminate:
 	return 0;
   }

   bool uper(char ch){
    if( ch <= 'Z')
        return true;
    else
        return false;
  }

  char to_uper(char ch){
    if( uper(ch) )
        return ch;
    else
        return ch - 'a' + 'A';
        
 }