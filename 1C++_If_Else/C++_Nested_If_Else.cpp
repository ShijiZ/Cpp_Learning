//
//  C++_Nested_If_Else.cpp
//  C++_Leaning
//
//  Created by shiji zhao on 1/10/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    
    if (number > 0){
        cout << "You entered a positive integer: " << number << endl;
    }
    
    else if (number < 0){
        cout << "You entered a negative integer: " << number << endl;
    }
    
    else{
        cout << "You entered zero." << endl;
    }
    cout << "This line is always printed.\n";
    return 0;
}
