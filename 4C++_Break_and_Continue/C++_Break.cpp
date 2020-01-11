//
//  C++_Break.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/10/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    float number, sum = 0.0;
    
    // test expression is always true
    while (true){
        cout << "Enter a number: ";
        cin >> number;
        
        if (number != 0.0){
            sum += number;
        }
        else{
            break;
        }
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
