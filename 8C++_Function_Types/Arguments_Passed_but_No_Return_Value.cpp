//
//  Arguments_Passed_but_No_Return_Value.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

void prime(int n);

int main(){
    int num;
    cout << "Enter a positive integer to check: ";
    cin >> num;
    
    // Argument num is passed to the function prime()
    prime(num);
    return 0;
}

// There is no return value to calling function. Hence, return type of function is void. */
void prime(int n){
    int i, flag = 0;
    for (i = 2; i <= n/2; ++i){
        if (n%i == 0){
            flag = 1;
            break;
        }
    }
    
    if (flag == 1){
        cout << n << " is not a prime number.\n";
    }
    else{
        cout << n << " is a prime number.\n";
    }
}

