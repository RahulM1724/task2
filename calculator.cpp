#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //define variables
    string operation;
    double number1 ,number2;

   // get user input
   cout << "Enter First Number: ";
   cin >> number1;
   cout<< "Enter Operation (+, -, *, /): ";
   cin>> operation;
   cout<< "Enter Second Number: ";
   cin>>number2;

   //if else statment checking entered operator
    if(operation == "+"){
        cout<< number1 + number2;
    }
    else if(operation == "-"){
        cout<< number1 - number2;
    }
    else if(operation == "*"){
        cout<< number1 * number2;
    }
    else if(operation == "/"){
            if(number2==0){
                cout<<"Error: Cannot be divided be 0.";
            }
            else{
        cout<< number1 / number2;
        }
    }
    else{
        cout<< "Not a recognized operation! ";
    }


    return 0;
}
