#include<bits/stdc++.h>
using namespace std;
struct student {
	 int age;
	 string name;
	 int rollnumber;
	 float marks;
	 void display(){
	 	cout<<"Age :"<<age<<endl;
	 	cout<<"StudentName:"<<name<<endl;
	 	cout<<"RollNumber:"<<rollnumber<<endl;
	 	cout<<"Marks :"<<name<<endl;
	 };
};

  	int main() {
  
  student stud1;
   cout<<"Enter id of student1:";
 cin>>stud1.rollnumber;

 cout<<"Enter name of first student:";
 cin>>stud1.name;
 cin.ignore();
 cout<<"Enter age of stud1:";
 cin>>stud1.age;
 cin.ignore();
 cout<<"Enter marks of stud1:";
 cin>>stud1.marks;
 cin.ignore();
 
 student stud2;
cout<<"Enter id of student2:";
 cin>>stud2.rollnumber;
 cin.ignore();
 cout<<"Enter name of second student:";
 cin>>stud2.name;
 cin.ignore();
 cout<<"Enter age of stud2:";
 cin>>stud2.age;
 cin.ignore();
 cout<<"Enter marks of stud2:";
 cin>>stud2.marks;
 cin.ignore();

 student stud3;
cout<<"Enter id of student 3 :";
 cin>>stud3.rollnumber;
 cin.ignore();
 cout<<"Enter name of third student:";
 cin>>stud3.name;
 cin.ignore();
 cout<<"Enter age of stud3:";
 cin>>stud3.age;
 cin.ignore();
 cout<<"Enter marks of stud3:";
 cin>>stud3.marks;
 cin.ignore();
     MyFile.open("filename.txt", ios::app);//write
  if(  MyFile.is_open()){
  MyFile<<stud1.rollnumber<<" ,"<<stud1.name<< " ,"<<stud1.age<<" ,"<<stud1.marks<<endl;
  MyFile<<stud2.rollnumber<<" ,"<<stud2.name<< " ,"<<stud2.age<<" ,"<<stud2.rollnumber<<endl;
  MyFile<<stud3.rollnumber<<" ,"<<stud3.name<< " ,"<<stud3.age<<" ,"<<stud3.rollnumber<<endl;
  MyFile<<stud4.rollnumber<<" ,"<<stud4.name<< " ,"<<stud4.age<<" ,"<<stud4.rollnumber<<endl;
  MyFile<<stud5.rollnumber<<" ,"<<stud5.name<< " ,"<<stud5.age<<" ,"<<stud5.rollnumber<<endl;

        }

   cout<<"==========================================================================="<<endl;
   
    cout<<stud1.rollnumber<<"  "<<stud1.name<<"  "<<stud1.age<<"  "<<stud1.marks<<endl;
    cout<<stud2.rollnumber<<"  "<<stud2.name<<"  "<<stud2.age<<"  "<<stud2.marks<<endl;
    cout<<stud3.rollnumber<<"  "<<stud3.name<<"  "<<stud3.age<<"  "<<stud3.marks<<endl;
  
  return 0;
  
  }