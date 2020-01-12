//
//  Arguments_Passed_and_a_Return_Value.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int prime(int n);

int main(){
    int num, flag = 0;
    cout << "Enter positive integer to check: ";
    cin >> num;
    // Argument num is passed to check() function
    flag = prime(num);
    
    if(flag == 1)
        cout << num << " is not a prime number.\n";
    else
        cout<< num << " is a prime number.\n";
    return 0;
}

/* This function returns integer value.  */
int prime(int n){
    int i;
    for(i = 2; i <= n/2; ++i){
        if(n % i == 0)
            return 1;
    }
    return 0;
}