//
//  C++_Do_While_Loop.cpp
//  C++_Leaning
//
//  Created by shiji zhao on 1/10/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    float number, sum = 0.0;
    
    do {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
    } while (number != 0.0);
    
    cout << "Total sum = " << sum << endl;
    return 0;
}
