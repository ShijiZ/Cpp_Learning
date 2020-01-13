//
//  C++_Array.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int numbers[5], sum = 0;
    cout << "Enter 5 numbers: ";
    
    // Store 5 numbers entered by user, then find the sum
    for (int i = 0; i < 5; i++){
        cin >> numbers[i];
        sum += numbers[i];
    }
    
    cout << "Sum = " << sum << endl;
    return 0;
}
