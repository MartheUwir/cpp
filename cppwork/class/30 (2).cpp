#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
  int main(){
  	string animals,food,coding,carrer,clothes;
  	int category;
  	string word;
  	cout <<"choose category of words"<<endl;
  	cout <<"1.Animals"<<endl;
  	cout <<"2.Food"<<endl;
  	cout <<"3.Coding"<<endl;
  	cout <<"4.Career"<<endl;
  	cout <<"5.Clothes"<<endl;
  	cin>>category;
  	if(category){
  	
  }else{
  
  	cout<<"Select category of word you want :";
  }
  switch (category){
  case'1':
  	cout <<"choose random words from animals: "<<endl;
  	cin>>animals;
  	srand(time(0));
    const string animals[5] ={"Imbogo","imvubu","impala","crocodile","hynas"};
    word= animals[rand() % 5];
   
    size_t no_left = word.length();
    string current_attempt = string( no_left, '-');
    cout << word << ' ' << current_attempt << '\n';
    char trial_char;
    
    
    while(no_left > 0){
        cout << "Enter word: ";
        cin >> trial_char;
        
        for(size_t i = 0; i < word.length(); i++){
            if( to_uper(word[i]) == to_uper(trial_char) && (current_attempt[i] == '-') ){
                no_left--;
                if( is_uper(word[i]) )
                    current_attempt[i] = to_uper(trial_char);
                else
                    current_attempt[i] = trial_char;
            }
        }
        cout << current_attempt << '\n';
    }
    
    break;
  }
}