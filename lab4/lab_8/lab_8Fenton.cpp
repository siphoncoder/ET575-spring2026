/*
Alex Fenton
Lab 8 switch-statement 
February 11,2026
*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    //Prompt due numbers 
    cout<< "Enter the first number:";
    cin >> num1;

    cout<<" Enter the second number:";
    cin>> num2;

    //Ask the operation
    cout<< "Choose operation (+,-,*, /,%, q to quit);
    cin>> operation;
    
    //Switch statement 
    switch (operation) {
    case '+';
    cout<< "Result: " << num1 <<" + " << num2
    << " = " << num1 + num2 << endl;

    break;

    case '_':
    cout<< "Result :" << num1<< " - " << num2
    << " = " << num1 - num2 << endl;
    break; 

    case '*';
    cout<< "Result: "<< num1<< "*" << num2
    << " = " << num1 * num2 << endl;

    break;

    case '/' : 
    if (num2 ! =0) {
    cout << "Result :" <<num1 / num2 << endl;
}
    else {
    cout << "Error: Division by zero is not allowed ." << endl;
    }
    break;

    case '%':
    if (num2 !=0) {
    cout << "Result:"  <<(int) num1 << "%" << (int)num2
    << "=" << (int)num1 % (int) num2 << endl;
    } else{
     cout << "Error : Division by zero is not allowed." << endl;
    }
   break;
    case 'q' :
    cout<< "Program exited." <<endl;
    break;

    case 'q' :
    cout << "Program exited." <<endl;
    break;

    default :
    cout << "Error: Invalid operation entered." <<endl;
   
   
   }

    return 0;
    
    
    
    }