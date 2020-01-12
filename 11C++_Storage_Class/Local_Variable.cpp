//
//  Local_Variable.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

void test();

int main(){
    // local variable to main()
    int var = 5;
    
    test();
    
    // illegal: var1 not declared inside main()
    var1 = 9;
}

void test(){
    // local variable to test()
    int var1;
    var1 = 6;
    
    // illegal: var not declared inside test()
    cout << var;
}
