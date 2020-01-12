//
//  No_Arguments_Passed_and_No_Return_Value.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;
void prime();

int main(){
    // No argument is passed to prime()
    prime();
    return 0;
}

// Return type of function is void because value is not returned.
void prime(){
    int num, i, flag = 0;
    cout << "Enter a positive integer enter to check: ";
    cin >> num;
    for(i = 2; i <= num/2; ++i){
        if(num % i == 0){
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
}
