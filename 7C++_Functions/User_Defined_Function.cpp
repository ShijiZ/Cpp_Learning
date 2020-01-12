//
//  User_Defined_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int add(int, int);

int main(){
    int num1, num2, sum;
    cout << "Enters two numbers to add: ";
    cin >> num1 >> num2;
    
    sum = add(num1, num2);
    cout << "Sum = " << sum << endl;
    return 0;
}

int add(int a, int b){
    int add;
    add = a + b;
    
    return add;
}
