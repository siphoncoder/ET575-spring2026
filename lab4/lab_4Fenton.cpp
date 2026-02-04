/*
Alex Fenton
Lab 4, string and string methods 
Feb 2, 2026
*/
#include<iostream>
#include<string>

using namespace std;

int main(){

cout<< "\n ------example 1: string indexing ---"<<endl;
//each charcater in a string can be acessed by its index number 
//index starts from 0, most left character
string firstname =" Peter";
cout<< "The 4th character of the first name =" <<firstname [3]<< endl;

cout<< "The 2nd charcter of the first name= " <<firstname.at(2)<< endl;
//length  method returns the amount of charcters in a string
int firstname_lenght = firstname.length();
cout<< "First name has" << firstname_lenght<< "characters" <<endl;
cout<<"\n---- example 3 : add or concatebnate strings ---"<<endl;
// operator adds or concatenates strings 
string color = "Orange";
string animal = "cat";
string addstrings = " My " +animal+ " loves "+ color + " toys";
cout<< color+animal << endl;
cout<< "\n---- example 4: subtract charcters from a string ----"<<endl;
// subtract () methid subtracts (extracts) charcters from a string 
//subr (index from where the subtraction would happen, among from charcters to be extracted)
string city ="Bayside";
string sub_char = city.substr(3,4); //subtract 4 charcters from index 3 
cout<< "Subtracted charcters=" <<sub_char<<endl;

cout<< "\n-----example 5: insert characters into string----"<<endl;
//instert new charcters into a string
//instert (index from where the new charcaters will be inserted, charcters to be inserted)
//insert Queens -- into Bayside. The resulkt should be = BayQueens-side
city.insert(3,"Queens-");
cout<<"After insert method ="<<city<<endl;

cout<< "\n ---- example 6: add charcters to the end of a string----" <<endl;
//add methods addws charcters to the end of a string
string fullname = "Peter Pan";
//add the word "@neverland" to the end of the fullnaame. The result should be 'Peter an@neverland'
fullname.append("@neverland");
cout<< "After append method= " <<fullname<<endl;

cout<< "\n ---- example 7: replace charcters in a string---"<<endl;
//replace method replaces charcters in a string
// replace (index where the replacement will happen, among of charcters to be replaced , string of new replaced )
string word = "engineering";
//replacre the word 'ee with 'FUTURE'. The result will be "enginFUTUREring"
word.replace(5,2, "FUTURE");
cout<<"AFter the replace method= " <<word<<endl;

cout<<"\n----example 8: erase charcters in a string ---"<<endl;
//erase(index where the erase will happen, among of characters to be erased)
word= "layout";
cout<< "Original word =" <<word<<endl;
//erase ' yo from word. The result should be 'lat'
word.erase(2,3);// erase three charcters from 9index 2
cout<<"After erase method=" <<word<<endl;

cout<<"\n---- example 9: find charcaters in a string---" <<endl;
//find method returns the index of the fiurst round character
word= "charcters";
//fijnd letter 'a' from word
int index_a = word.find("a");
cout<< "Index for a =" <<index_a<<endl;
//find the index for 'act'
cout<<"Index for 'act'= " <<word.find("act")<<endl;

//Exercise Homework 

cout << "Enter a word";
cin>> word;

//Print second character 
cout << "2nd charcter : " << word.at(1)<< endl;

//Print length
cout<< "Length: " << word.length() << endl;

//Replace 2 characters starting from 3rd
string replaced = word;
replaced.replace (2,2, "---$---");
cout<< "After replacement : "<< replaced << endl;

//Remove last 3 characters 
string shortened = word;
shortened.erase(shortened.length() - 3, 3);
cout<< "After removing last 3 chars :" << shortened << endl;


return 0;


}