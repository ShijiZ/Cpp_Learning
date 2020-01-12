//
//  Factorial_of_a_Number_Using_Recursion.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int n;
    cout << "Enter a number to find factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}

int factorial(int n){
    if (n > 1){
        return n * factorial(n-1);
    } else {
        return 1;
    }
}
