#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Student
{
    string fname;
    string lname;
    int age;
    int rollNumber;
    float marks;
}student;
int main()
{
    cout << "Enter first name: ";
    cin >> student.fname;
    cout << "Enter last name: ";
    cin >> student.lname;
    cout << "Enter age: ";
    cin >> student.age;
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter marks: ";
    cin >> student.marks;
    ofstream file;
    file.open("data.txt");
    file << "Name: " << student.fname << endl;
    file << "Name: " << student.lname << endl;
    file << "Age: " << student.age << endl;
    file << "Roll Number: " << student.rollNumber << endl;
    file << "Marks: " << student.marks << endl;
    file.close();
    ifstream file2;
    file2.open("student.txt");
    string line;
    while (getline(file2, line))
    {
        cout << line << endl;
    }
    file2.close();
    return 0;
}