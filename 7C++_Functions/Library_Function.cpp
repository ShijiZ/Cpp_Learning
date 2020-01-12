//
//  Library_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double number, squareRoot;
    cout << "Enter a number: ";
    cin >> number;
    
    squareRoot = sqrt(number);
    cout << "Square root of " << number << " = " << squareRoot << endl;
    return 0;
}
