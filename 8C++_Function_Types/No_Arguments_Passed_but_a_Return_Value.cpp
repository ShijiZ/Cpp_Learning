//
//  No_Arguments_Passed_but_a_Return_Value.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;
int prime();

int main(){
    int num, i, flag = 0;
    // No argument is passed to prime()
    num = prime();
    for (i = 2; i <= num/2; ++i){
        if (num%i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        cout << num << " is not a prime number.\n";
    }
    else{
        cout << num << " is a prime number.\n";
    }
    return 0;
}

// Return type of function is int
int prime(){
    int n;
    cout << "Enter a positive integer to check: ";
    cin >> n;
    return n;
}
