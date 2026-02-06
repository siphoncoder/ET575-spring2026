#include<iostream>
using namespace std;

int main(){
cout<<"\n ---- example 1: bool variables -----" <<endl;
// bool variable returns a 1 for ture or a 0 for false 
bool ipositive;
int number;

cout<< "Enter a number:";
cin>> number;
ipositive = number > 0;
cout<< "Is "<< number << "positive ?" <<ipositive<< endl;

cout<< "\n----- Example 2: if statemnt ----" <<endl;
//if statement will run the code in between the curly bracews if the statent is true 

int num1=3;
int num2=5;

if (num1==num2); {


    cout<<"the numbers are equal" <<endl;
}


cout<< "End of example 2"<< endl;
cout<<"\n----example 3: if-else statement ----"<<endl;
// if-else works as a switch. If 'If' statment is true, the program will run the codes of the if statement and ignore the code of the 'else' statemnt 
// example to check with number, num1 or num2 , is greater 
if(num1>num2){
    cout<< "num1 is greater than num2"<<endl;
}
else{
    cout<<"num2 is greater than num1" <<endl;
}

cout<< "\n----example 4 : multiways statemtn ----"<<endl;
//multiway checks more than 2 conditions 
//example compare if num1 is equal to , greater than, less than num2
if (num1==num2){
}
else if (num1>num2){

}
else {
    cout << num2 is greater than num1" << endl;
}
    cout<<"\n---- example : multiway statement: find the color depending of the wavelength----

    //declare variables
    int wavelength = 0;
    string color;

    //colect the wavelength
    cout<< "Enter a wavelength:" <<endl;
    cin>> wavelength;
    if (wavelength <=379 && wavelength>=10){
        color = "blue";
        else if (wavelength <=590 && wavelength>=521)
        color = "green";
        else if (wavelength <=740 && wavelength>=591)
        color = "red";
        else if (wavelength>=741)
        color = "infrared";
        else 
        color ="undefined"

        //print result 
        cout<<"wavelength  of "<< wavelength<< "emits color"<< color<<endl;
    cout<< "\n----Exercise --- " <<endl;
    //declare the varibales 
    char gpa  =' ';
    float final_exam=0;
    float labs =0;
    float homework=0;
    float grade=0;

    //collect data : final_exam , labs, and homework 
    // calculate the grade = final_exam"0.5+ lab "0.3 + homeowork" 0.2
    //multiway condition 
    //print result 
      //LabExercise 
double final_exams , labs , homework;
//Input 
cout<< "Enter final exam grade" ;
cin >> final_exam;
cout <<"Enter homeowrk grade:" ;
cin>> homework;


//calculate weighted grade 
double grade = final_exam  *0.5 + labs * 0.3 + homework * 0.2;
string gpa;

//Branching
if (grade>= 90 && grade <=100)
gpa = "A";
else if (grade >= 80)
gpa = "B";
else if (grade >= 70)
gpa = "C";
else if (grade>= 60)
gpa = "D";
else if (grade>=0)
gpa = "F";
else
gpa = ""; 

//Output 
cout<< "A final grade of " << grade
<<" is equivalent to a GPA of" << gpa << endl;
return 0;
}
