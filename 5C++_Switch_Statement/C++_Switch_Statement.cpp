//
//  C++_Switch_Statement.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    char o;
    float num1, num2;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> o;
    
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    
    switch (o){
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
            break;
        default:
            cout << "Error! operator is not correct";
            break;
    }
    
    return 0;
}
