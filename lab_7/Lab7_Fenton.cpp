/*
Alex Fenton
Lab 7,Nested condition statemtent 
February 9th, 2026
*/

#include<iostream>

using namespace std;

int main(){
    cout<< "\n---- example 1 : nested conditiomnal 1 ----" <<endl;
    //se nested conditional statemtent to check if a number is postiive (even or odd), negative ( even or odd) or zero
    int number = -8;
    if (number>0){
     if (number%2==0)
     cout<<number<<" is positive and even!" <<endl;
     else 
     cout<<numbber<< "Is positive and odd!" <<endl;
    }
    else if (number <0) {
        if (number%2==0)
        cout<<number<< " Is negative and even!" <<endl;
        else cout<<number<<"IS negative and odd!" <<endl;
    }
else cout<<number<<" The number is zero"<<endl;
cout <<"\n-----Example 2: nested conditional---" <<endl;
//sort three numbers from the highest to the lowest number
//declare variables
int num1, num2, num3;
//collect values
cout<<"Enter three numbers:" <<endl;
cin>>num1>num2>>num3;
//conditional statement 
if (num1>num2 && num>num3){
    cout<<num1<<"num1 is the highest number"<<endl;
if (num1>num3)
cout<<num1<<"\t" <<num2<<"\t" <<num3<<endl;
else
cout<<num1"\t" << num3<<"\t" <<num2<<endl;

}
else if (num2>num1 && num2>num3){
cout<<num2<<"num2 is the highest number"<<endl;
if (num1<num3)
cout<<num2<<"\t" <<num1<<"\t" <<num3<<endl;
else
cout<< num2<<"\t" <<num3<<"\t" <<num1<<endl;

}
else{
cout <<num3<<"num3 is the highest number" <<endl;
if (num1>num2)
cout<<num3<<"\t" <<num1<< "\t" num2<<endl;
else
cout <<num3<<"\t"<< num2<<"\t" << num1<<endl;

 }
cout<<"\n----Example 3: Nested condityional---"<<endl;
//use operands to check if a number is even or odd
/*
if(x%2==0
cout<< "Even" << endl;
else 
cout<< "Odd" <<endl;
*/

int x =5;
cout<<"The number is" << (x%2==0 ? "Even" : "Odd")<<endl;
cout<<"\n---Exercise---"<<endl;
    return 0;
}



