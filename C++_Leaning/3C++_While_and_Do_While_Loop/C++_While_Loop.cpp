//
//  C++_While_Loop.cpp
//  C++_Leaning
//
//  Created by shiji zhao on 1/10/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number, i = 1, factorial = 1;
    
    cout << "Enter a positive number: ";
    cin >> number;
    
    while (i <= number){
        factorial *= i;
        ++i;
    }
    
    cout << "Factorial of " << number << " = " << factorial << endl;
    return 0;
}
