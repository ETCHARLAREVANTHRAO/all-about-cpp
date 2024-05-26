// all about functions

// Need implementation and execution
// Function is a piece of code that performs as specific task
// Syntax of a function
// returnType functionName(parameter1, parameter2, ....){
//  function body
//}


#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){

    int a = 3;
    int b = 4;
    cout<<add(a, b)<<endl;

    return 0;
}