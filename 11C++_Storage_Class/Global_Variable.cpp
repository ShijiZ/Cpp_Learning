//
//  Global_Variable.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

// Global variable declaration
int c = 12;

void test();

int main(){
    c++;
    
    // Outputs 13
    cout << c << endl;
    test();
    
    return 0;
}

void test(){
    c++;
    
    // Outputs 14
    cout << c << endl;
}
