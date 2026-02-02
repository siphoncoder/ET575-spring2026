/*
Alex Fenton
February 1, 2026
lab1, iostream
*/
//header library 
#include<iostream>
using namespace std;


// main function is the executable part of c++file
int main() {

cout<< "\n Example 1: output stream, cout" <<endl<<endl;
cout<< "\n Welcome to C++" <<endl;
cout<< "\n Exmaple 2: Declaring variables " <<endl;
 //declaring variables 
 int number;
 string username;
 char symbol;
 
 // Assign value to variable 
 username = "peterpan123";
 symbol = '%';
 number = 9;
//print values in a variable 
cout << "Given username =" <<username<<endl;
cout<< "Given number =" <<number<<endl;
cout<< " Given symbol=" <<symbol<<endl;

cout<<"\n Example 3: console in, cin" <<endl;
//declare variables
float n = 3.5; 
string lastname;
//collect lastname from user terminal 
cout<< "Enter a lastname: ";
cin>>lastname; 

//print result 
cout<<"Welcome to c++" <<lastname<<" Your rate is " <<n<<endl;

cout<< "EXERCISE" <<endl;
//declare variables
return 0;


}